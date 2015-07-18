#ifndef  V81C_XML_SERIALIZER
#define V81C_XML_SERIALIZER

#include <libxml++/libxml++.h>
#include "../8.1/data/core.hxx"
#include "../8.3/xcf/logform.hxx"
#include "enums.hxx"
#include <memory>

#include <ostream>

namespace debug {

void output_data(std::ostream &os);

}

namespace v81c { namespace xml {

namespace v8 = v8_1::data::core;
namespace lf = v8_3::xcf::logform;

v8::String &
__read(v8::String &dst, xmlpp::Node *element);

v8::StringInLanguage &
__read(v8::StringInLanguage &dst, xmlpp::Node *element);

v8::StringInDifferentLanguages &
__read(v8::StringInDifferentLanguages &dst, xmlpp::Node *element);

v8::Boolean &
__read(v8::Boolean &dst, xmlpp::Node *element);

lf::BooleanAuto &
__read(lf::BooleanAuto &dst, xmlpp::Node *element);

v8::Number &
__read(v8::Number &dst, xmlpp::Node *element);

lf::ManagedForm &
__read(lf::ManagedForm &dst, xmlpp::Node *element);


lf::UsualGroup &
__read(lf::UsualGroup &dst, xmlpp::Node *element);

lf::InputField &
__read(lf::InputField &dst, xmlpp::Node *element);

lf::FormItems &
__read(lf::FormItems &dst, xmlpp::Node *element);

lf::FormTable &
__read(lf::FormTable &dst, xmlpp::Node *element);

lf::LabelField &
__read(lf::LabelField &dst, xmlpp::Node *element);

lf::ColumnGroup &
__read(lf::ColumnGroup &dst, xmlpp::Node *element);


template <typename T>
T &read(T &dst, xmlpp::Node *element)
{
    return __read(dst, element);
}

template <typename T>
T &read(T &dst, xmlpp::TextReader &reader)
{
    return __read(dst, reader);
}

}}

#endif //V81C_XML_SERIALIZER
