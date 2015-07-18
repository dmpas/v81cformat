#ifndef XCF_LOGFORM_FORM
#define XCF_LOGFORM_FORM

#include "8.1/data/core.hxx"
#include "8.1/data/enterprise.hxx"
#include "8.2/managed-application/logform.hxx"
#include <vector>
#include <memory>

namespace v81c { namespace v8_3 { namespace xcf { namespace logform {
namespace v8 = v81c::v8_1::data::core;
namespace lf = v81c::v8_3::xcf::logform;
namespace app= v81c::v8_2::managedapplication::logform;
namespace ent= v81c::v8_1::data::enterprise;

template <typename T>
class svector : public std::vector< std::shared_ptr<T> > {};

enum class BooleanAuto
{
    No,
    Yes,
    Auto
};

class BaseFormElement
{
public:
    BaseFormElement() {} ;
    BaseFormElement(const BaseFormElement &src) : name(src.name), id(src.id) {};

    virtual ~BaseFormElement() {};

    v8::String                          name;
    v8::Number                          id;

    bool operator == (const BaseFormElement &B) const { return id == B.id; };

};

class ManagedFormElement : public BaseFormElement
{
public:
};

class ElementList : public svector<ManagedFormElement>
{
public:
};

class FormItems : public svector<ManagedFormElement>
{
public:
};

class FormGroup : public ManagedFormElement
{
public:
    FormGroup(app::ManagedFormGroupType type) : Type(type) {};
    app::ManagedFormGroupType               Type;
};

class FormTable : public ManagedFormElement
{
public:

    FormTable() : Header(true) {} ;

    BooleanAuto                             AutoAddIncomplete;
    v8::Boolean                             Autofill;
    v8::Boolean                             AutoInsertNewRow;
    BooleanAuto                             AutoMarkIncomplete;
    // BackColor
    // BorderColor
    v8::Boolean                             ChangeRowOrder;
    v8::Boolean                             ChangeRowSet;

    FormItems                               ChildItems;

    v8::String                              DataPath;
    v8::Boolean                             DefaultItem;
    v8::Boolean                             Footer;
    v8::Number                              FooterHeight;
    v8::Boolean                             Header;
    v8::Number                              HeaderHeight;
    v8::Number                              Height;
    v8::Number                              HeightInTableRows;
    v8::Boolean                             HorizontalLines;
    app::TableScrollBarUse                  HorizontalScrollBar;
    v8::Boolean                             HorizontalStretch;


    v8::StringInDifferentLanguages          Title;
    app::FormElementTitleLocation           TitleLocation;

    v8::Boolean                             VerticalLines;
    app::TableScrollBarUse                  VerticalScrollBar;
    v8::Boolean                             VerticalStretch;

    v8::Number                              Width;

};

class FormField : public ManagedFormElement
{
public:
    FormField(app::ManagedFormFieldType type) : Type(type) {};
    app::ManagedFormFieldType               Type;
};

class LabelField : public FormField
{
public:
    LabelField() : FormField(app::ManagedFormFieldType::LabelField) {};
    v8::String                              DataPath;
};

class InputField : public FormField
{
public:
    InputField() : FormField(app::ManagedFormFieldType::InputField) {};

    v8::Number                              Width;
    v8::Number                              Height;
    v8::String                              DataPath;

    BooleanAuto                             HorizontalStretch;
    BooleanAuto                             VerticalStretch;
    // ContextMenu
    v8::Boolean                             ClearButton;
    // ExtendedToolTip
    // Events
    v8::StringInDifferentLanguages          Title;
    v8::Boolean                             ListChoiceMode;
    // ChooseType
    v8::Boolean                             TextEdit;
    // ChoiceList
    // EditMode
    v8::Boolean                             ReadOnly;
    v8::Boolean                             Wrap;
    // BorderColor
    BooleanAuto                             ChoiceButton;
    app::FormElementTitleLocation           TitleLocation;
    BooleanAuto                             MultyLine;
    BooleanAuto                             ChoiceListButton;
    v8::StringInDifferentLanguages          ToolTip;
    app::ItemHorizontalAlignment            HorizontalAlign;
    v8::StringInDifferentLanguages          EditFormat;
    v8::Boolean                             TypeDomainEnabled;
    // MinValue
    app::ItemHorizontalAlignment            FooterHorizontalAlign;
    BooleanAuto                             PasswordMode;
    BooleanAuto                             OpenButton;
    // ChoiceParameters
    BooleanAuto                             SpinButton;
};

class FormButton : public ManagedFormElement
{
public:
};

class UsualGroup : public FormGroup
{
public:

    UsualGroup() : FormGroup(app::ManagedFormGroupType::UsualGroup) {};
    virtual ~UsualGroup() {};

    v8::StringInDifferentLanguages          Title;

    app::LogFormScrollMode                  VerticalScroll;

    v8::Number                              Width;
    app::FormChildrenGroup                  Group;
    BooleanAuto                             VerticalStretch;

    v8::StringInDifferentLanguages          ToolTip;
    app::TooltipRepresentation              ToolTipRepresentation;
    app::FormChildrenWidth                  ChildItemsWidth;
    v8::Boolean                             ShowTitle;
    app::UsualGroupRepresentation           Representation;
    v8::Boolean                             Visible;
    v8::Boolean                             Enabled;

    FormItems                               Items;

};

class ColumnGroup : public FormGroup
{
public:
    ColumnGroup() : FormGroup(app::ManagedFormGroupType::ColumnGroup) {};

    // ExtendedToolTip
    app::FormChildrenGroup                  Group;
    FormItems                               Items;
};

class ManagedForm
{
public:

    ManagedForm() {}
    virtual ~ManagedForm() {}

    v8::StringInDifferentLanguages          Title;
    v8::Boolean                             AutoTitle;
    v8::Boolean                             Customizable;
    app::AutoSaveFormDataInSettings         AutoSaveDataInSettings;
    app::SaveFormDataInSettings             SaveDataInSettings;

    app::FormElementCommandBarLocation      CommandBarLocation;

    app::FormWindowOpeningMode              WindowOpeningMode;
    app::LogFormScrollMode                  VerticalScroll;
    app::FoldersAndItems                    UseForFoldersAndItems; // Расширение

    ent::AutoTimeMode                       AutoTime;
    app::FormEnterKeyBehavior               EnterKeyBehavior;

    v8::Boolean                             RepostOnWrite;
    ent::PostingModeUse                     UsePostingMode;
    v8::Boolean                             AutoFillCheck;
    v8::Number                              Width;
    app::FormChildrenGroup                  Group;
    app::FormChildrenWidth                  ChildItemsWidth;

    FormItems                               Items;

};

}}}}

#endif // XCF_LOGFORM_FORM
