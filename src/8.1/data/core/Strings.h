#ifndef STRINGINDIFFERENTLANGUAGES_H
#define STRINGINDIFFERENTLANGUAGES_H

#include <vector>
#include <string>
#include "Arbitrary.h"

namespace v81c { namespace v8_1 { namespace data { namespace core {


class String : public Arbitrary
{
public:
    String();
    String(const std::string &data);
    String(const String &src);
    virtual ~String();
    const std::string &get_data() const;

    bool operator == (const String &B) const;
    bool operator == (const std::string &B) const;
    bool operator != (const String &B) const;
    bool operator != (const std::string &B) const;

    bool empty() const;

private:
    std::string     m_data; // TODO: wstring?
};

class StringInLanguage
{
public:

    StringInLanguage ();
    StringInLanguage (const StringInLanguage &data);
    virtual ~StringInLanguage ();

    void setLang(const String &data);
    const String &getLang() const;

    void setContent(const String &content);
    const String &getContent() const;

private:
    String m_lang;
    String m_content;
};

// TODO: map?
class StringInDifferentLanguages : public std::vector<StringInLanguage>
{
public:
    StringInDifferentLanguages();
    virtual ~StringInDifferentLanguages();

    String get(const std::string &langname) const;

protected:
private:
};


// implementaion

inline
String::String()
    : m_data("")
{
}

inline
String::String(const std::string &data)
    : m_data(data)
{
}

inline
String::String(const String &src)
    : m_data(src.m_data)
{
}

inline
String::~String()
{
}

inline
const std::string &String::get_data() const
{
    return m_data;
}

inline
bool String::operator == (const String &B) const
{
    return m_data == B.m_data;
}

inline
bool String::operator == (const std::string &B) const
{
    return m_data == B;
}

inline
bool String::operator != (const String &B) const
{
    return m_data != B.m_data;
}

inline
bool String::operator != (const std::string &B) const
{
    return m_data != B;
}

inline bool String::empty() const
{
    return m_data.empty();
}

inline
StringInLanguage::StringInLanguage ()
{
}

inline
StringInLanguage::StringInLanguage (const StringInLanguage &data)
    : m_lang(data.m_lang), m_content(data.m_content)
{
}

inline
StringInLanguage::~StringInLanguage ()
{
}

inline
void StringInLanguage::setLang(const String &data)
{
    m_lang = data;
}

inline
const String &StringInLanguage::getLang() const
{
    return m_lang;
}

inline
void StringInLanguage::setContent(const String &content)
{
    m_content = content;
}

inline
const String &StringInLanguage::getContent() const
{
    return m_content;
}

inline
StringInDifferentLanguages::StringInDifferentLanguages()
{
    //ctor
}

inline
StringInDifferentLanguages::~StringInDifferentLanguages()
{
    //dtor
}

inline
String StringInDifferentLanguages::get(const std::string &langname) const
{
    for (auto el : *this) {
        if (el.getLang() == langname)
            return el.getContent();
    }
    return String();
}


}}}}

#endif // STRINGINDIFFERENTLANGUAGES_H
