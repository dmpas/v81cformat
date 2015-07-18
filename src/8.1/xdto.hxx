#ifndef V81C_V8_1_XDTO_INCLUDED
#define V81C_V8_1_XDTO_INCLUDED
namespace v81c { namespace v8_1 { namespace xdto { 
enum class Form { 
    Attribute, 
    Element, 
    Text, 
    __LAST
};

enum class Variety { 
    Atomic, 
    List, 
    Union, 
    __LAST
};

enum class Whitespace { 
    preserve, 
    replace, 
    collapse, 
    __LAST
};

} } } 
#endif
