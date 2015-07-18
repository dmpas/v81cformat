#ifndef SIMPLE_STRING_H_INCLUDED
#define SIMPLE_STRING_H_INCLUDED

#include <ostream>
#include "8.1/data/core.hxx"
#include "8.2/managed-application/logform.hxx"
#include "8.3/xcf/logform.hxx"

namespace v81c { namespace ss {

namespace v8 = v81c::v8_1::data::core;
namespace lf = v81c::v8_3::xcf::logform;
namespace app= v81c::v8_2::managedapplication::logform;

inline
std::ostream &operator << (std::ostream &os, const v8::String &data)
{
    os << data.get_data();
    return os;
}

inline
std::ostream &operator << (std::ostream &os, const v8::Boolean &data)
{
    os << (data.getValue() ? "true" : "false");
    return os;
}

inline
std::ostream &operator << (std::ostream &os, const v8::Number &data)
{
    os << data.getValue();
    return os;
}

std::ostream &operator << (std::ostream &os, const v8::StringInLanguage &data);
std::ostream &operator << (std::ostream &os, const v8::StringInDifferentLanguages &data);
std::ostream &operator << (std::ostream &os, const lf::ManagedFormElement &data);
std::ostream &operator << (std::ostream &os, const lf::InputField &data);
std::ostream &operator << (std::ostream &os, const std::shared_ptr<lf::ManagedFormElement> &data);
std::ostream &operator << (std::ostream &os, const lf::ManagedForm &data);
std::ostream &operator << (std::ostream &os, const lf::BooleanAuto &value);

}}

#endif // SIMPLE_STRING_H_INCLUDED
