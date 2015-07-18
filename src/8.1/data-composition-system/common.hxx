#ifndef V81C_V8_1_DATACOMPOSITIONSYSTEM_COMMON_INCLUDED
#define V81C_V8_1_DATACOMPOSITIONSYSTEM_COMMON_INCLUDED
namespace v81c { namespace v8_1 { namespace datacompositionsystem { namespace common { 
enum class DataCompositionAccountingBalanceType { 
    None, 
    Debit, 
    Credit, 
    __LAST
};

enum class DataCompositionAreaTemplateType { 
    Header, 
    Footer, 
    HierarchicalHeader, 
    HierarchicalFooter, 
    OverallHeader, 
    OverallFooter, 
    __LAST
};

enum class DataCompositionBalanceType { 
    None, 
    OpeningBalance, 
    ClosingBalance, 
    __LAST
};

enum class DataCompositionPeriodType { 
    Main, 
    Specify, 
    Additional, 
    __LAST
};

} } } } 
#endif
