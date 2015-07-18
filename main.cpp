#include "src/xml/serializer.h"
#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include "src/render/simple_string.h"
#include "src/render/simple_html.h"

namespace v8 = v81c::v8_1::data::core;
namespace lf = v81c::v8_3::xcf::logform;

const std::string v8Boolean_001 = "<Bool>true</Bool>";
const std::string v8Boolean_002 = "<Bool>false</Bool>";
const std::string v8Boolean_003 = "<Bool>tru</Bool>";
const std::string v8Boolean_004 = "<Bool/>";

const std::string v8String_001 = "<SomeString>The text</SomeString>";
const std::string v8String_002 = "<SomeString/>";
const std::string v8String_003 = "<SomeString></SomeString>";

const std::string v8Numeric_001 = "<Num>1</Num>";
const std::string v8Numeric_002 = "<Num>0</Num>";
const std::string v8Numeric_003 = "<Num>99999</Num>";
const std::string v8Numeric_004 = "<Num></Num>";
const std::string v8Numeric_005 = "<Num/>";

const std::string v8BooleanAuto_001 = "<Bool>true</Bool>";
const std::string v8BooleanAuto_002 = "<Bool>false</Bool>";
const std::string v8BooleanAuto_003 = "<Bool>tru</Bool>";
const std::string v8BooleanAuto_004 = "<Bool/>";


const std::string v8StringInLanguage_001 =
    "<Some xmlns:v8=\"http://v8.1c.ru/8.1/data/core\">"
    "   <v8:lang>ru</v8:lang>"
    "   <v8:content>Soderzhimoe</v8:content>"
    "</Some>"
;

const std::string v8StringInLanguage_002 =
    "<Some xmlns=\"http://v8.1c.ru/8.1/data/core\">"
    "   <lang>ru</lang>"
    "   <content>Soderzhimoe</content>"
    "</Some>"
;

// Вот так должно не сработать
const std::string v8StringInLanguage_003 =
    "<Some>"
    "   <lang>ru</lang>"
    "   <content>Soderzhimoe</content>"
    "</Some>"
;

const std::string v8Multylang_001 =
    "<Some xmlns=\"http://v8.1c.ru/8.1/data/core\">"
    "   <item>"
    "       <lang>ru</lang>"
    "       <content>ru</content>"
    "   </item>"
    "   <item>"
    "       <lang>en</lang>"
    "       <content>en</content>"
    "   </item>"
    "</Some>"
;


template <typename T>
void read_and_write(const std::string &data)
{
    xmlpp::DomParser parser;
    parser.parse_memory(Glib::ustring(data));

    T value;

    xmlpp::Node *root = parser.get_document()->get_root_node();
    v81c::xml::read(value, root);

    using namespace v81c::ss;

    std::cout << "value = [[" << value << "]]" << std::endl;
}

static std::map<std::string, bool> unrecognized;

lf::ManagedForm &
__read(lf::ManagedForm &dst, xmlpp::Node *element)
{

    v81c::xml::read(dst, element);

    return dst;
}

std::ostream &header(std::ostream &os)
{
    os << "<html>" << std::endl;
    os << "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />" << std::endl;
    os << "<link href=\"default.css\" rel=\"stylesheet\" type=\"text/css\" />" << std::endl;
    os << "<head><title>Form rendered</title></head>";
    os << "<body>";
    return os;
}

std::ostream &footer(std::ostream &os)
{
    os << "</body></html>";
    return os;
}


void go_forms()
{

    boost::filesystem::remove_all("./bin/out");
    boost::filesystem::create_directories("./bin/out");

    boost::filesystem::copy("./res/default.css", "./bin/out/default.css");

    boost::filesystem::path res("./forms");
    boost::filesystem::directory_iterator dit(res), dend;

    for (; dit != dend; ++dit) {
        xmlpp::DomParser parser;
        parser.parse_file(dit->path().string());

        lf::ManagedForm form;
        xmlpp::Node *root = parser.get_document()->get_root_node();
        __read(form, root);

        using namespace v81c::html;

        boost::filesystem::path out_path ("./bin/out");
        out_path /= dit->path().filename().stem();
        out_path += ".html";

        boost::filesystem::ofstream out(out_path);

        out << header;
        out << form;
        out << footer;

    }

    for (auto el : unrecognized) {
        std::cout << "unrecognized " << el.first << std::endl;
    }
}

void try_simple()
{
    read_and_write<v8::String>(v8String_001);
    read_and_write<v8::String>(v8String_002);
    read_and_write<v8::String>(v8String_003);

    read_and_write<v8::StringInLanguage>(v8StringInLanguage_001);
    read_and_write<v8::StringInLanguage>(v8StringInLanguage_002);
    read_and_write<v8::StringInLanguage>(v8StringInLanguage_003);

    read_and_write<v8::StringInDifferentLanguages>(v8Multylang_001);

    read_and_write<v8::Boolean>(v8Boolean_001);
    read_and_write<v8::Boolean>(v8Boolean_002);
    read_and_write<v8::Boolean>(v8Boolean_003);
    read_and_write<v8::Boolean>(v8Boolean_004);

    read_and_write<v8::Number>(v8Numeric_001);
    read_and_write<v8::Number>(v8Numeric_002);
    read_and_write<v8::Number>(v8Numeric_003);
    read_and_write<v8::Number>(v8Numeric_004);
    read_and_write<v8::Number>(v8Numeric_005);

    read_and_write<lf::BooleanAuto>(v8BooleanAuto_001);
    read_and_write<lf::BooleanAuto>(v8BooleanAuto_002);
    read_and_write<lf::BooleanAuto>(v8BooleanAuto_003);
    read_and_write<lf::BooleanAuto>(v8BooleanAuto_004);
}

int main()
{

    go_forms();

    debug::output_data(std::cout);

    return 0;
}
