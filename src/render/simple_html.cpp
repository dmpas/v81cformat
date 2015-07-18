#include "simple_html.h"
#include "simple_string.h"
#include <typeinfo>
#include <ostream>
#include <iostream>

namespace v81c {

namespace html {


static
void end_simple(std::ostream &os, bool &simple)
{
    if (simple) {
        os << "</table>";
        simple = false;
    }
}


void render_element(std::ostream &os, const std::shared_ptr<lf::ManagedFormElement> &element, bool use_simple, bool &simple);

static
bool is_simple(const std::shared_ptr<lf::ManagedFormElement> &element)
{

    if (typeid(*element) == typeid(lf::InputField))
        return true;

    if (typeid(*element) == typeid(lf::LabelField))
        return true;

    return false;
}

template <typename T>
void render_as_group(std::ostream &os, const T &G)
{
    app::FormChildrenGroup group = G.Group;
    std::string g_class = (group == app::FormChildrenGroup::Horizontal) ? "horizontal" : "vertical";
    os << "<table class='" << g_class << "'>";
    if (group == app::FormChildrenGroup::Horizontal) {
        os << "<tr>";
    }

    os << std::endl;

    // режим simple для простых списков полей ввода: заголовки и поля ввода выравниваются в табличку
    bool last_simple = false;
    bool use_simple = group != app::FormChildrenGroup::Horizontal;
    bool first = true;

    for (auto child : G.Items) {

        bool simple = is_simple(child) && use_simple;
        if (simple) {

            if (!last_simple) {

                if (group != app::FormChildrenGroup::Horizontal) {
                    os << "<tr>";
                }
                os << "<td>" << std::endl;
                os << "<table class='v__simple'>" << std::endl;
            }

        } else {

            if (last_simple) {
                os << "</table>" << std::endl;
            }

            if (!first) {
                os << "</td>" << std::endl;
            }

            if (group != app::FormChildrenGroup::Horizontal) {
                os << "<tr>";
            }

            os << "<td>" << std::endl;
        }

        render_element(os, child, use_simple, last_simple);

        last_simple = simple;
        first = false;

    }

    end_simple(os, last_simple);

    os << "</table><!-- " << g_class << " -->";
    os << std::endl;
}


std::ostream &operator << (std::ostream &os, const lf::ManagedForm &form)
{
    render_as_group(os, form);
    return os;
}

void render_input_field(std::ostream &os, const std::shared_ptr<lf::InputField> &element, bool simple)
{
    v8::String title;

    if (element->TitleLocation != app::FormElementTitleLocation::None) {
        title = element->Title.get("ru");
        if (title.empty())
            title = element->name;
        if (title.empty())
            title = element->DataPath;
    }

    if (!simple) {
        os << "<table class='v__union'>";
    }

    os << "<tr>";
    if (element->TitleLocation == app::FormElementTitleLocation::Left
        || element->TitleLocation == app::FormElementTitleLocation::Auto) {

        os << "<td>";
        v81c::ss::operator<<(os, title) << ": ";
        os << "</td>";
    }

    os << "<td>";
    os << "<input type='text' />";
    os << "</td>";

    if (element->TitleLocation == app::FormElementTitleLocation::Right) {

        os << "<td>";

        v81c::ss::operator<<(os << " :", title);

        os << "</td>";
    }

    if (!simple) {
        os << "</table><!-- union -->";
    }
    os << std::endl;
}

void render_label_field(std::ostream &os, const std::shared_ptr<lf::LabelField> &element, bool simple)
{
    v8::String title;

    title = element->name;
    if (title.empty())
        title = element->DataPath;

    if (!simple) {
        os << "<table class='v__union'>";
    }

    os << "<tr>";

    os << "<td>";
    os << "<span>";
    v81c::ss::operator<<(os, title) << "</span>";
    os << "</td>";

    if (!simple) {
        os << "</table><!-- union -->";
    }
    os << std::endl;
}


void render_form_table(std::ostream &os, const std::shared_ptr<lf::FormTable> &element)
{
    v8::String title;

    if (element->TitleLocation != app::FormElementTitleLocation::None) {
        title = element->Title.get("ru");
        if (title.empty())
            title = element->name;
        if (title.empty())
            title = element->DataPath;
    }

    if (element->TitleLocation == app::FormElementTitleLocation::Left
        || element->TitleLocation == app::FormElementTitleLocation::Auto) {

        v81c::ss::operator<<(os, title) << ": ";

    }

    std::string row_template = "";
    std::string header = "";
    std::string footer = "";

    os << "<table class=\"FormTable\">";

    for (auto child : element->ChildItems) {

        //
        if (typeid(*child) == typeid(lf::LabelField)) {
            // Обычная колонка

            auto label_field = std::dynamic_pointer_cast<lf::LabelField>(child);

            v8::String title = label_field->DataPath;
            if (title.empty()) {
                title = label_field->name;
            }

            header       += "<td class=\"FormTableHeaderCell\">" + title.get_data() + "</td>";
            row_template += "<td class=\"FormTableRowCell\">---</td>";
            footer       += "<td class=\"FormTableFooterCell\">&nbsp;</td>";

        } else

        if (typeid(*child) == typeid(lf::InputField)) {
            // Обычная колонка

            auto label_field = std::dynamic_pointer_cast<lf::InputField>(child);

            v8::String title = label_field->DataPath;
            if (title.empty()) {
                title = label_field->name;
            }

            header       += "<td class=\"FormTableHeaderCell\">" + title.get_data() + "</td>";
            row_template += "<td class=\"FormTableRowCell\"><input type='text' /></td>";
            footer       += "<td class=\"FormTableFooterCell\">&nbsp;</td>";

        } else

        if (typeid(*child) == typeid(lf::ColumnGroup)) {
            // Сдѣлеам пока что одну вложенность. Потом вывод надо передѣлывать на класс.

            header       += "<td class=\"FormTableHeaderCell\">";
            row_template += "<td class=\"FormTableRowCell\">";
            footer       += "<td class=\"FormTableFooterCell\">";

            header += "<table class=\"FormTableHeaderGroup\">";
            row_template += "<table><tr><td>...</td>";
            footer += "<table>";

            auto group = std::dynamic_pointer_cast<lf::ColumnGroup>(child);
            for (auto item : group->Items) {

                if (typeid(*item) == typeid(lf::LabelField)) {
                    header += "<tr><td class=\"FormTableHeaderGroupCell\">...</td>";
                    footer += "<tr><td class=\"FormTableFooterGroupCell\">...</td>";
                }

            }

            header       += "</td>";
            row_template += "</td>";
            footer       += "</td>";

            header += "</table>";
            row_template += "</table>";
            footer += "</table>";

        } else

        {
            // что-то невѣдомое
            #ifdef DEBUG
            std::cout << typeid(*child).name() << std::endl;
            #endif
        }

    }

    const int RENDER_ROW_COUNT = 5; // сколько пустых строк добавить в таблицу

    if (element->Header.getValue()) {
        os << "<tr class=\"FormTableHeader\">" << header << "</tr>" << std::endl;
    }

    for (int i = 0; i < RENDER_ROW_COUNT; ++i) {
        os << "<tr class=\"FormTableRow\">" << row_template << "</tr>" << std::endl;
    }

    if (element->Footer.getValue()) {
        os << "<tr class=\"FormTableFooter\">" << footer << "</tr>" << std::endl;
    }

    os << "</table>";

    if (element->TitleLocation == app::FormElementTitleLocation::Right) {
        v81c::ss::operator<<(os << " :", title);
    }

    os << std::endl;

}

void render_element(std::ostream &os, const std::shared_ptr<lf::ManagedFormElement> &element, bool use_simple, bool &simple)
{
    if (typeid(*element) == typeid(lf::UsualGroup)) {
        render_as_group(os,
                *(std::dynamic_pointer_cast<lf::UsualGroup>(element))
        );
    } else

    if (typeid(*element) == typeid(lf::InputField)) {
        render_input_field(os, std::dynamic_pointer_cast<lf::InputField>(element), use_simple);
    } else

    if (typeid(*element) == typeid(lf::LabelField)) {
        render_label_field(os, std::dynamic_pointer_cast<lf::LabelField>(element), use_simple);
    } else

    if (typeid(*element) == typeid(lf::FormTable)) {
        render_form_table(os, std::dynamic_pointer_cast<lf::FormTable>(element));
    } else

    {
        // Somethыng
        os << "<!-- " << typeid(*element).name() << " -->" << std::endl;

        #ifdef DEBUG
        std::cout << typeid(*element).name() << std::endl;
        #endif
    }
}

} // :html

} // :v81c
