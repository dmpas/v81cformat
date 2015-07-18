#ifndef V81C_V8_1_DATA_ENTERPRISE_INCLUDED
#define V81C_V8_1_DATA_ENTERPRISE_INCLUDED
namespace v81c { namespace v8_1 { namespace data { namespace enterprise { 
enum class AccountType { 
    Active, 
    Passive, 
    ActivePassive, 
    __LAST
};

enum class AccountingRecordType { 
    Debit, 
    Credit, 
    __LAST
};

enum class AccumulationRecordType { 
    Receipt, 
    Expense, 
    __LAST
};

enum class AccumulationRegisterAggregatePeriodicity { 
    Nonperiodical, 
    Auto, 
    Day, 
    Month, 
    Quarter, 
    HalfYear, 
    Year, 
    __LAST
};

enum class AccumulationRegisterAggregateUse { 
    Auto, 
    Always, 
    __LAST
};

enum class AutoShowStateMode { 
    Auto, 
    DontShow, 
    Show, 
    ShowOnComposition, 
    __LAST
};

enum class AutoTimeMode { 
    DontUse, 
    Last, 
    First, 
    CurrentOrLast, 
    CurrentOrFirst, 
    __LAST
};

enum class ClientApplicationBaseFontVariant { 
    Normal, 
    Large, 
    __LAST
};

enum class ClientApplicationFormScaleVariant { 
    Auto, 
    Normal, 
    Compact, 
    __LAST
};

enum class ClientApplicationInterfaceVariant { 
    Version8_2, 
    Taxi, 
    __LAST
};

enum class ClientConnectionSpeed { 
    Normal, 
    Low, 
    __LAST
};

enum class ComparisonType { 
    Equal, 
    NotEqual, 
    Less, 
    LessOrEqual, 
    Greater, 
    GreaterOrEqual, 
    Interval, 
    IntervalIncludingBounds, 
    IntervalIncludingLowerBound, 
    IntervalIncludingUpperBound, 
    Contains, 
    InList, 
    InListByHierarchy, 
    NotInList, 
    NotInListByHierarchy, 
    InHierarchy, 
    NotInHierarchy, 
    NotContains, 
    BeginsWith, 
    NotBeginsWith, 
    Like, 
    NotLike, 
    __LAST
};

enum class DocumentPostingMode { 
    Regular, 
    RealTime, 
    __LAST
};

enum class DocumentWriteMode { 
    Write, 
    Posting, 
    UndoPosting, 
    __LAST
};

enum class FoldersAndItemsUse { 
    Items, 
    Folders, 
    FoldersAndItems, 
    __LAST
};

enum class LinkedValueChangeMode { 
    Clear, 
    DontChange, 
    __LAST
};

enum class MessageStatus { 
    WithoutStatus, 
    Ordinary, 
    Information, 
    Attention, 
    Important, 
    VeryImportant, 
    __LAST
};

enum class ModalityUseMode { 
    Use, 
    UseWithWarnings, 
    DontUse, 
    __LAST
};

enum class PostingModeUse { 
    Regular, 
    RealTime, 
    Ask, 
    Auto, 
    __LAST
};

enum class ResultCompositionMode { 
    Auto, 
    Background, 
    Directly, 
    __LAST
};

enum class TransactionsIsolationLevel { 
    Auto, 
    ReadUncommitted, 
    ReadCommitted, 
    RepeatableRead, 
    Serializable, 
    __LAST
};

enum class UpdateOnDataChange { 
    Auto, 
    DontUpdate, 
    __LAST
};

} } } } 
#endif
