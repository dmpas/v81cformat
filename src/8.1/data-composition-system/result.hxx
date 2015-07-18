#ifndef V81C_V8_1_DATACOMPOSITIONSYSTEM_RESULT_INCLUDED
#define V81C_V8_1_DATACOMPOSITIONSYSTEM_RESULT_INCLUDED
namespace v81c { namespace v8_1 { namespace datacompositionsystem { namespace result { 
enum class DataCompositionResultItemType { 
    Begin, 
    End, 
    BeginAndEnd, 
    __LAST
};

enum class DataCompositionResultNestedItemsLayout { 
    Vertically, 
    Horizontally, 
    __LAST
};

} } } } 
#endif
