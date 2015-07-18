#include "serializer.h"

#ifdef DEBUG
#include <iostream>
#include <set>
#endif

#include <cstdio>
#include <ostream>
#include <stack>
#include <map>

using namespace std;

namespace debug {

#ifdef DEBUG
static stack< set<string> > recognition;
static stack< string > types;
static map<string, set<string> > unrecognized;
#endif

static void
entry(const string &type)
{
#ifdef DEBUG
    types.push(type);
    recognition.emplace();
    if (unrecognized.count(type) == 0) {
        unrecognized[type] = set<string>();
    }
#endif
}

static void
out(xmlpp::Node *element)
{
#ifdef DEBUG
    string type = types.top();
    types.pop();

    set<string> &field_set = unrecognized[type];
    set<string> &recognized = recognition.top();

    auto children = element->get_children();
    for (auto child : children) {

        auto el = dynamic_cast<xmlpp::Element*>(child);
        if (!el) {
            continue;
        }

        string name(el->get_name().c_str());
        if (recognized.count(name) == 0) {
            field_set.insert(name);
        }

    }

    recognition.pop();
#endif
}

static void
mark(const string &field)
{
#ifdef DEBUG
    recognition.top().insert(field);
#endif
}

void
output_data(ostream &os)
{
#ifdef DEBUG
    for (auto kv : unrecognized) {
        cout << kv.first << ": " << endl;
        for (auto value : kv.second) {
            cout << "    " << value << endl;
        }
    }
#endif
}

}

namespace v81c { namespace xml {


namespace patch {

// В сигвинѣ нѣт std::stoi

static
int stoi(const string &s)
{
    int r;
    sscanf(s.c_str(), "%d", &r);
    return r;
}

}

v8::String &__read(v8::String &dst, xmlpp::Node *element)
{
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();

        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        string sc(tn->get_content().c_str());

        dst = v8::String(sc);

    } else
        dst = v8::String();

    return dst;
}

v8::StringInLanguage &__read(v8::StringInLanguage &dst, xmlpp::Node *element)
{
    v8::String lang;
    v8::String content;

    xmlpp::Node::PrefixNsMap ns;
    ns["xmlns"] = v8::xmlns;

    xmlpp::NodeSet nodes;
    nodes = element->find("xmlns:lang", ns);
    if (!nodes.empty()) {
        dst.setLang(__read(lang, nodes.at(0)));
    }

    nodes = element->find("xmlns:content", ns);
    if (!nodes.empty()) {
        dst.setContent(__read(content, nodes.at(0)));
    }

    return dst;
}

v8::StringInDifferentLanguages &
__read(v8::StringInDifferentLanguages &dst, xmlpp::Node *element)
{
    xmlpp::Node::PrefixNsMap ns;
    ns["xmlns"] = v8::xmlns;

    xmlpp::NodeSet nodes;
    nodes = element->find("xmlns:item", ns);

    dst.clear();

    for (auto node : nodes) {
        v8::StringInLanguage item;
        dst.push_back(__read(item, node));
    }

    return dst;
}

v8::Boolean &
__read(v8::Boolean &dst, xmlpp::Node *element)
{
    dst.setValue(false);

    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();

        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        string sc(tn->get_content().c_str());

        if (sc == "true")
            dst.setValue(true);

    }

    return dst;
}

v8::Number &
__read(v8::Number &dst, xmlpp::Node *element)
{
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();

        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        string sc(tn->get_content().c_str());

        dst.setValue(patch::stoi(sc));
    }

    return dst;
}

// BooleanAuto отрабатываем отдельно, потому что в коде это Yes/No/Auto, а в файле true/false/...
lf::BooleanAuto &
__read(lf::BooleanAuto &dst, xmlpp::Node *element)
{
    dst = lf::BooleanAuto::Auto;

    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        string sc(tn->get_content().c_str());
        if (sc == "false") {
            dst = lf::BooleanAuto::No;
            return dst;
        }
        if (sc == "true") {
            dst = lf::BooleanAuto::Yes;
            return dst;
        }
    }
    return dst;
}


template <typename T>
void __read_one(T &dst, const string &name, xmlpp::Node *element)
{
    debug::mark(name);

    xmlpp::Node::NodeList children = element->get_children(name);
    if (children.empty())
        return;

    xmlpp::Node *child = children.front();
    if (child)
        __read(dst, child);
}

#ifdef DEBUG
static set<string> unrecognized;
#endif

template <typename T>
shared_ptr<T> new_element(const v8::Number &id, const v8::String &name)
{
    auto result = make_shared<T>();
    result->id = id;
    result->name = name;
    return result;
}

template <typename T>
shared_ptr<T> read_new(xmlpp::Node *element, const v8::Number &id, const v8::String &name)
{
    auto obj = new_element<T>(id, name);
    read(*obj, element);
    return obj;
}

lf::ColumnGroup &
__read(lf::ColumnGroup &dst, xmlpp::Node *element)
{

    debug::entry("ColumnGroup");

    __read_one(dst.Group, "Group", element);
    __read_one(dst.Items, "ChildItems", element);

    debug::out(element);

    return dst;

}

lf::FormTable &
__read(lf::FormTable &dst, xmlpp::Node *element)
{

    debug::entry("FormTable");

    __read_one(dst.AutoAddIncomplete, "AutoAddIncomplete", element);
    __read_one(dst.Autofill, "Autofill", element);
    __read_one(dst.AutoInsertNewRow, "AutoInsertNewRow", element);
    __read_one(dst.AutoMarkIncomplete, "AutoMarkIncomplete", element);
    __read_one(dst.ChangeRowOrder, "ChangeRowOrder", element);
    __read_one(dst.ChangeRowSet, "ChangeRowSet", element);
    __read_one(dst.ChildItems, "ChildItems", element);
    __read_one(dst.DataPath, "DataPath", element);
    __read_one(dst.DefaultItem, "DefaultItem", element);
    __read_one(dst.Footer, "Footer", element);
    __read_one(dst.FooterHeight, "FooterHeight", element);
    __read_one(dst.Header, "Header", element);
    __read_one(dst.HeaderHeight, "HeaderHeight", element);
    __read_one(dst.Height, "Height", element);
    __read_one(dst.HeightInTableRows, "HeightInTableRows", element);
    __read_one(dst.HorizontalLines, "HorizontalLines", element);
    __read_one(dst.HorizontalScrollBar, "HorizontalScrollBar", element);
    __read_one(dst.HorizontalStretch, "HorizontalStretch", element);
    __read_one(dst.Title, "Title", element);
    __read_one(dst.TitleLocation, "TitleLocation", element);
    __read_one(dst.VerticalLines, "VerticalLines", element);
    __read_one(dst.VerticalScrollBar, "VerticalScrollBar", element);
    __read_one(dst.VerticalStretch, "VerticalStretch", element);
    __read_one(dst.Width, "Width", element);

    debug::out(element);

	return dst;
}

shared_ptr<lf::ManagedFormElement> recognize_form_element(xmlpp::Node *node)
{
    xmlpp::Element *el = dynamic_cast<xmlpp::Element *>(node);
    if (!el)
        return nullptr;

    v8::String aName;
    v8::Number aId;

    xmlpp::Attribute *xaName = el->get_attribute("name");
    if (xaName) {
       aName = v8::String(string(xaName->get_value().c_str()));
    }
    xmlpp::Attribute *xaId = el->get_attribute("id");
    if (xaId) {
        aId = v8::Number(patch::stoi(string(xaId->get_value().c_str())));
    }

    string name(el->get_name().c_str());

    if (name == "InputField") {
        return read_new<lf::InputField>(node, aId, aName);
    } else

    if (name == "UsualGroup") {
        return read_new<lf::UsualGroup>(node, aId, aName);
    } else

    if (name == "Table") {
        return read_new<lf::FormTable>(node, aId, aName);
    } else
    if (name == "PictureField") {
        // read input field
    } else

    if (name == "ColumnGroup") {
        return read_new<lf::ColumnGroup>(node, aId, aName);
    } else

    if (name == "Pages") {
        // read input field
    } else

    if (name == "LabelField") {
        return read_new<lf::LabelField>(node, aId, aName);
    } else

    if (name == "CommandBar") {
        // read input field
    } else

    if (name == "PictureDecoration") {
        // read input field
    } else

    if (name == "LabelDecoration") {
        // read input field
    } else

    if (name == "RadioButtonField") {
        // read input field
    } else

    if (name == "Button") {
        // read input field
    } else

    if (name == "CheckBoxField") {
        // read input field
    } else

    if (name == "SpreadSheetDocumentField") {
        // read input field
    } else

    if (name == "TextDocumentField") {
        // read input field
    } else

    if (name == "HTMLDocumentField") {
        // read input field
    } else

    {
        #ifdef DEBUG
            if (unrecognized.find(name) == unrecognized.end()) {
                cout << "Unrecognized form element " << name << endl;
                unrecognized.insert(name);
            }
        #endif
        return nullptr;
    }

    return nullptr;
}

lf::UsualGroup &
__read(lf::UsualGroup &dst, xmlpp::Node *element)
{

    debug::entry("UsualGroup");

    __read_one(dst.Title, "Title", element);
    __read_one(dst.ToolTip, "ToolTip", element);
    __read_one(dst.ToolTipRepresentation, "ToolTipRepresentation", element);
    __read_one(dst.VerticalScroll, "VerticalScroll", element);
    __read_one(dst.Width, "Width", element);
    __read_one(dst.Group, "Group", element);
    __read_one(dst.VerticalStretch, "VerticalStretch", element);
    __read_one(dst.ChildItemsWidth, "ChildItemsWidth", element);


    __read_one(dst.ShowTitle, "ShowTitle", element);
    __read_one(dst.Visible, "Visible", element);
    __read_one(dst.Visible, "Enabled", element);
    __read_one(dst.Representation, "Representation", element);

    __read_one(dst.Items, "ChildItems", element);

    debug::out(element);

    return dst;
}

lf::InputField &
__read(lf::InputField &dst, xmlpp::Node *element)
{

    debug::entry("InputField");

    __read_one(dst.Width, "Width", element);
    __read_one(dst.Height, "Height", element);
    __read_one(dst.DataPath, "DataPath", element);
    __read_one(dst.HorizontalStretch, "HorizontalStretch", element);
    __read_one(dst.VerticalStretch, "VerticalStretch", element);
//    __read_one(dst.ContextMenu, "ContextMenu", element);
    __read_one(dst.ClearButton, "ClearButton", element);
//    __read_one(dst.ExtendedToolTip, "ExtendedToolTip", element);
//    __read_one(dst.Events, "Events", element);
    __read_one(dst.Title, "Title", element);
    __read_one(dst.ListChoiceMode, "ListChoiceMode", element);
//    __read_one(dst.ChooseType, "ChooseType", element);
    __read_one(dst.TextEdit, "TextEdit", element);
//    __read_one(dst.ChoiceList, "ChoiceList", element);
//    __read_one(dst.EditMode, "EditMode", element);
    __read_one(dst.ReadOnly, "ReadOnly", element);
    __read_one(dst.Wrap, "Wrap", element);
//    __read_one(dst.BorderColor, "BorderColor", element);
    __read_one(dst.ChoiceButton, "ChoiceButton", element);
    __read_one(dst.TitleLocation, "TitleLocation", element);
    __read_one(dst.MultyLine, "MultyLine", element);
    __read_one(dst.ChoiceListButton, "ChoiceListButton", element);
    __read_one(dst.ToolTip, "ToolTip", element);
    __read_one(dst.HorizontalAlign, "HorizontalAlign", element);
    __read_one(dst.EditFormat, "EditFormat", element);
    __read_one(dst.TypeDomainEnabled, "TypeDomainEnabled", element);
//    __read_one(dst.MinValue, "MinValue", element);
    __read_one(dst.FooterHorizontalAlign, "FooterHorizontalAlign", element);
    __read_one(dst.PasswordMode, "PasswordMode", element);
    __read_one(dst.OpenButton, "OpenButton", element);
//    __read_one(dst.ChoiceParameters, "ChoiceParameters", element);
    __read_one(dst.SpinButton, "SpinButton", element);

    debug::out(element);

    return dst;
}

lf::LabelField &
__read(lf::LabelField &dst, xmlpp::Node *element)
{
    debug::entry("LabelField");

    __read_one(dst.DataPath, "DataPath", element);

    debug::out(element);

    return dst;
}


lf::FormItems &
__read(lf::FormItems &dst, xmlpp::Node *element)
{
    dst.clear();

    xmlpp::Node::NodeList children = element->get_children();

    for (auto child : children) {
        auto element = recognize_form_element(child);
        if (element) {
            dst.push_back(element);
        }
    }

    return dst;
}


lf::ManagedForm &
__read(lf::ManagedForm &dst, xmlpp::Node *element)
{

    debug::entry("ManagedForm");

    __read_one(dst.Title, "Title", element);
    __read_one(dst.AutoTitle, "AutoTitle", element);
    __read_one(dst.Customizable, "Customizable", element);
    __read_one(dst.CommandBarLocation, "CommandBarLocation", element);
    __read_one(dst.VerticalScroll, "VerticalScroll", element);
    __read_one(dst.AutoSaveDataInSettings, "AutoSaveDataInSettings", element);
    __read_one(dst.SaveDataInSettings, "SaveDataInSettings", element);
    __read_one(dst.AutoTime, "AutoTime", element);
    __read_one(dst.UsePostingMode, "UsePostingMode", element);
    __read_one(dst.RepostOnWrite, "RepostOnWrite", element);
    __read_one(dst.WindowOpeningMode, "WindowOpeningMode", element);
    __read_one(dst.EnterKeyBehavior, "EnterKeyBehavior", element);
    __read_one(dst.UseForFoldersAndItems, "UseForFoldersAndItems", element);
    __read_one(dst.AutoFillCheck, "AutoFillCheck", element);
    __read_one(dst.Width, "Width", element);
    __read_one(dst.Group, "Group", element);
    __read_one(dst.ChildItemsWidth, "ChildItemsWidth", element);

    __read_one(dst.Items, "ChildItems", element);

    #ifdef DEBUG
    debug::out(element);
    #endif

    return dst;
}

}}
