#ifndef V81C_V8_1_DATACOMPOSITIONSYSTEM_CORE_INCLUDED
#define V81C_V8_1_DATACOMPOSITIONSYSTEM_CORE_INCLUDED
namespace v81c { namespace v8_1 { namespace datacompositionsystem { namespace core { 
enum class DataCompositionFieldsTitleType { 
    Auto, 
    Full, 
    Short, 
    __LAST
};

enum class DataCompositionGroupType { 
    Items, 
    Hierarchy, 
    HierarchyOnly, 
    __LAST
};

enum class DataCompositionParameterUse { 
    Always, 
    Auto, 
    __LAST
};

enum class DataCompositionPeriodAdditionType { 
    None, 
    Year, 
    HalfYear, 
    Quarter, 
    Month, 
    TenDays, 
    Week, 
    Day, 
    Hour, 
    Minute, 
    Second, 
    __LAST
};

enum class DataCompositionSortDirection { 
    Asc, 
    Desc, 
    __LAST
};

enum class DataCompositionTextPlacementType { 
    Block, 
    Cut, 
    Wrap, 
    Overflow, 
    __LAST
};

enum class DataCompositionTotalPlacement { 
    Begin, 
    End, 
    BeginAndEnd, 
    None, 
    Auto, 
    __LAST
};

} } } } 
#endif
