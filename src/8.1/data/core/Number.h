#ifndef DATA_CORE_NUMERIC_H
#define DATA_CORE_NUMERIC_H

#include "Arbitrary.h"

namespace v81c { namespace v8_1 { namespace data { namespace core {

// TODO: Сделать из Number толковый decimal. Пока что int.
class Number : public Arbitrary
{
public:
    Number() : m_value(0) {};
    virtual ~Number() {};

    Number(int value) : m_value(value) {};

    void setValue(int value) { m_value = value; }
    int getValue() const { return m_value; }

    bool operator == (const Number &B) const { return m_value == B.getValue(); };
    bool operator != (const Number &B) const { return m_value != B.getValue(); };

private:
    int m_value;
};

}}}}


#endif // DATA_CORE_NUMERIC_H
