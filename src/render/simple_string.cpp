#include "simple_string.h"

namespace v81c { namespace ss {

std::ostream &operator << (std::ostream &os, const v8::StringInLanguage &data)
{
    os << "lang=`" << data.getLang() << "`,content=`" << data.getContent() << "`";
    return os;
}

std::ostream &operator << (std::ostream &os, const v8::StringInDifferentLanguages &data)
{
    bool was = false;
    for (auto sil : data) {
        if (was)
            os << ", ";
        os << sil.getLang() << "='" << sil.getContent() << "'";
        was = true;
    }
    return os;
}

std::ostream &operator << (std::ostream &os, const lf::ManagedFormElement &data)
{
    os << typeid(data).name();
    return os;
}

std::ostream &operator << (std::ostream &os, const lf::InputField &data)
{
    v8::String title;

    if (data.TitleLocation != app::FormElementTitleLocation::None) {
        title = data.Title.get("ru");
        if (title.empty())
            title = data.name;
        if (title.empty())
            title = data.DataPath;
    }

    if (data.TitleLocation == app::FormElementTitleLocation::Left
        || data.TitleLocation == app::FormElementTitleLocation::Auto)
        os << title << ": ";

    os << "<InputField>";

    if (data.TitleLocation == app::FormElementTitleLocation::Right)
        os << " :" << title;

    return os;
}

std::ostream &operator << (std::ostream &os, const lf::BooleanAuto &value)
{
    if (value == lf::BooleanAuto::Yes) {
        os << "Yes";
    } else
    if (value == lf::BooleanAuto::No) {
        os << "No";
    } else
        os << "Auto";

    return os;
}

}}
