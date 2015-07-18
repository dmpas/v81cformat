#ifndef V81C_V8_1_DATACOMPOSITIONSYSTEM_SETTINGS_INCLUDED
#define V81C_V8_1_DATACOMPOSITIONSYSTEM_SETTINGS_INCLUDED
namespace v81c { namespace v8_1 { namespace datacompositionsystem { namespace settings { 
enum class DataCompositionAttributesPlacement { 
    WithOwnerField, 
    Separately, 
    Together, 
    SpecialPosition, 
    __LAST
};

enum class DataCompositionChartLegendPlacement { 
    None, 
    Left, 
    Right, 
    Top, 
    Bottom, 
    __LAST
};

enum class DataCompositionComparisonType { 
    Equal, 
    NotEqual, 
    Less, 
    LessOrEqual, 
    Greater, 
    GreaterOrEqual, 
    Contains, 
    InList, 
    InListByHierarchy, 
    InHierarchy, 
    NotContains, 
    NotInList, 
    NotInListByHierarchy, 
    NotInHierarchy, 
    Filled, 
    NotFilled, 
    BeginsWith, 
    NotBeginsWith, 
    Like, 
    NotLike, 
    __LAST
};

enum class DataCompositionConditionalAppearanceUse { 
    Use, 
    DontUse, 
    __LAST
};

enum class DataCompositionFieldPlacement { 
    Auto, 
    Horizontally, 
    Vertically, 
    SpecialColumn, 
    Together, 
    __LAST
};

enum class DataCompositionFilterApplicationType { 
    Items, 
    Hierarchy, 
    HierarchyOnly, 
    __LAST
};

enum class DataCompositionFilterItemsGroupType { 
    AndGroup, 
    OrGroup, 
    NotGroup, 
    __LAST
};

enum class DataCompositionFixation { 
    Auto, 
    DontUse, 
    __LAST
};

enum class DataCompositionGroupFieldsPlacement { 
    Together, 
    Separately, 
    SeparatelyAndInTotalsOnly, 
    __LAST
};

enum class DataCompositionGroupPlacement { 
    Begin, 
    End, 
    BeginAndEnd, 
    None, 
    __LAST
};

enum class DataCompositionGroupTemplateType { 
    Vertical, 
    Horizontal, 
    Auto, 
    __LAST
};

enum class DataCompositionGroupUseVariant { 
    Auto, 
    AdditionalInformation, 
    __LAST
};

enum class DataCompositionResourcesAutoPosition { 
    DontUse, 
    AfterAllFields, 
    __LAST
};

enum class DataCompositionResourcesPlacement { 
    Vertically, 
    Horizontally, 
    __LAST
};

enum class DataCompositionResourcesPlacementInChart { 
    Auto, 
    Series, 
    Points, 
    __LAST
};

enum class DataCompositionSettingsItemState { 
    Enabled, 
    Disabled, 
    DeletedByUser, 
    __LAST
};

enum class DataCompositionSettingsItemViewMode { 
    Normal, 
    QuickAccess, 
    Inaccessible, 
    Auto, 
    __LAST
};

enum class DataCompositionSettingsViewMode { 
    All, 
    QuickAccess, 
    __LAST
};

enum class DataCompositionTextOutputType { 
    DontOutput, 
    Output, 
    Auto, 
    __LAST
};

} } } } 
#endif
