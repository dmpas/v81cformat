#ifndef DATA_CORE_BOOLEAN
#define DATA_CORE_BOOLEAN

#include "Arbitrary.h"

namespace v81c { namespace v8_1 { namespace data { namespace core {

class Boolean : public Arbitrary
{
public:
    Boolean() : m_value(false) {};
    virtual ~Boolean() {};

    Boolean(bool value) : m_value(value) {} ;

    void setValue(bool value) { m_value = value; }
    bool getValue() const { return m_value; }

private:
    bool m_value;
};

}}}}

#endif // DATA_CORE_BOOLEAN
