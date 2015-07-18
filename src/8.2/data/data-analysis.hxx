#ifndef V81C_V8_2_DATA_DATAANALYSIS_INCLUDED
#define V81C_V8_2_DATA_DATAANALYSIS_INCLUDED
namespace v81c { namespace v8_2 { namespace data { namespace dataanalysis { 
enum class AnalysisDataType { 
    Contiguous, 
    Discrete, 
    __LAST
};

enum class AssociationRulesDataSourceType { 
    Event, 
    Object, 
    __LAST
};

enum class AssociationRulesPruneType { 
    Redundant, 
    Covered, 
    __LAST
};

enum class ClusterizationMethod { 
    KMeans, 
    NearestNeighbor, 
    FurthestNeighbor, 
    Centroid, 
    __LAST
};

enum class DataAnalysisAssociationRulesOrderType { 
    BySupport, 
    ByConfidence, 
    ByImportance, 
    __LAST
};

enum class DataAnalysisColumnType { 
    NotUsed, 
    __LAST
};

enum class DataAnalysisColumnTypeAssociationRules { 
    NotUsed, 
    Object, 
    Item, 
    __LAST
};

enum class DataAnalysisColumnTypeClusterization { 
    NotUsed, 
    Input, 
    Predictable, 
    InputAndPredictable, 
    Key, 
    __LAST
};

enum class DataAnalysisColumnTypeDecisionTree { 
    NotUsed, 
    Input, 
    Predictable, 
    __LAST
};

enum class DataAnalysisColumnTypeSequentialPatterns { 
    NotUsed, 
    Item, 
    Sequence, 
    Time, 
    __LAST
};

enum class DataAnalysisColumnTypeSummaryStatistics { 
    NotUsed, 
    Input, 
    __LAST
};

enum class DataAnalysisDistanceMetricType { 
    SquaredEuclidean, 
    Euclidean, 
    CityBlock, 
    Maximum, 
    __LAST
};

enum class DataAnalysisNumericValueUseType { 
    AsNumeric, 
    AsBoolean, 
    __LAST
};

enum class DataAnalysisResultTableFillType { 
    DontFill, 
    KeyFields, 
    UsedFields, 
    AllFields, 
    __LAST
};

enum class DataAnalysisSequentialPatternsOrderType { 
    BySupport, 
    ByLength, 
    __LAST
};

enum class DataAnalysisStandardizationType { 
    DontStandardize, 
    Standardize, 
    __LAST
};

enum class DataAnalysisTimeIntervalUnitType { 
    Second, 
    CurrentMinute, 
    Minute, 
    CurrentHour, 
    Hour, 
    CurrentDay, 
    Day, 
    CurrentWeek, 
    Week, 
    CurrentMonth, 
    Month, 
    CurrentQuarter, 
    Quarter, 
    CurrentYear, 
    Year, 
    CurrentTenDays, 
    TenDays, 
    CurrentHalfYear, 
    HalfYear, 
    __LAST
};

enum class DecisionTreeSimplificationType { 
    DontSimplify, 
    Simplify, 
    __LAST
};

enum class PredictionModelColumnType { 
    Input, 
    Predictable, 
    DataSourceColumn, 
    __LAST
};

} } } } 
#endif
