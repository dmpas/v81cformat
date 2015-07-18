#ifndef V81C_V8_1_DATA_CORE_INCLUDED
#define V81C_V8_1_DATA_CORE_INCLUDED

#include "core/Arbitrary.h"
#include "core/Boolean.h"
#include "core/Number.h"
#include "core/Strings.h"

namespace v81c { namespace v8_1 { namespace data { namespace core {

const std::string xmlns = "http://v8.1c.ru/8.1/data/core";

enum class AllowedLength {
    Fixed,
    Variable,
    __LAST
};

enum class AllowedSign {
    Any,
    Nonnegative,
    __LAST
};

enum class DateFractions {
    Date,
    Time,
    DateTime,
    __LAST
};

enum class FillCheckErrorStatus {
    Error,
    Warning,
    __LAST
};

enum class FillChecking {
    DontCheck,
    ShowError,
    __LAST
};

enum class StandardBeginningDateVariant {
    Custom,
    BeginningOfThisDay,
    BeginningOfThisWeek,
    BeginningOfThisTenDays,
    BeginningOfThisMonth,
    BeginningOfThisQuarter,
    BeginningOfThisHalfYear,
    BeginningOfThisYear,
    BeginningOfLastDay,
    BeginningOfLastWeek,
    BeginningOfLastTenDays,
    BeginningOfLastMonth,
    BeginningOfLastQuarter,
    BeginningOfLastHalfYear,
    BeginningOfLastYear,
    BeginningOfNextDay,
    BeginningOfNextWeek,
    BeginningOfNextTenDays,
    BeginningOfNextMonth,
    BeginningOfNextQuarter,
    BeginningOfNextHalfYear,
    BeginningOfNextYear,
    __LAST
};

enum class StandardPeriodVariant {
    Custom,
    Today,
    ThisWeek,
    ThisTenDays,
    ThisMonth,
    ThisQuarter,
    ThisHalfYear,
    ThisYear,
    FromBeginningOfThisWeek,
    FromBeginningOfThisTenDays,
    FromBeginningOfThisMonth,
    FromBeginningOfThisQuarter,
    FromBeginningOfThisHalfYear,
    FromBeginningOfThisYear,
    Yesterday,
    LastWeek,
    LastTenDays,
    LastMonth,
    LastQuarter,
    LastHalfYear,
    LastYear,
    LastWeekTillSameWeekDay,
    LastTenDaysTillSameDayNumber,
    LastMonthTillSameDate,
    LastQuarterTillSameDate,
    LastHalfYearTillSameDate,
    LastYearTillSameDate,
    Tomorrow,
    NextWeek,
    NextTenDays,
    NextMonth,
    NextQuarter,
    NextHalfYear,
    NextYear,
    NextWeekTillSameWeekDay,
    NextTenDaysTillSameDayNumber,
    NextMonthTillSameDate,
    NextQuarterTillSameDate,
    NextHalfYearTillSameDate,
    NextYearTillSameDate,
    TillEndOfThisWeek,
    TillEndOfThisTenDays,
    TillEndOfThisMonth,
    TillEndOfThisQuarter,
    TillEndOfThisHalfYear,
    TillEndOfThisYear,
    Last7Days,
    Next7Days,
    Month,
    __LAST
};

} } } }
#endif
