#ifndef V81C_V8_2_DATA_CHART_INCLUDED
#define V81C_V8_2_DATA_CHART_INCLUDED
namespace v81c { namespace v8_2 { namespace data { namespace chart { 
enum class ChartAnimation { 
    Auto, 
    Use, 
    DontUse, 
    __LAST
};

enum class ChartLabelLocation { 
    Edge, 
    Center, 
    EdgeInside, 
    EdgeAuto, 
    __LAST
};

enum class ChartMarkerType { 
    None, 
    Rect, 
    Circle, 
    Rhomb, 
    __LAST
};

enum class ChartOrientation { 
    SouthWest, 
    SouthEast, 
    __LAST
};

enum class ChartSemitransparencyMode { 
    DontUse, 
    Use, 
    Auto, 
    __LAST
};

enum class ChartSpaceMode { 
    None, 
    Half, 
    Full, 
    __LAST
};

enum class ChartSplineMode { 
    None, 
    SmoothCurve, 
    __LAST
};

enum class ChartValuesBySeriesConnectionType { 
    None, 
    EdgesConnection, 
    __LAST
};

enum class DendrogramOrientation { 
    Top, 
    Bottom, 
    Right, 
    Left, 
    __LAST
};

enum class DendrogramScaleKeeping { 
    AllItems, 
    ItemCount, 
    MinimumWidth, 
    __LAST
};

enum class GanttChartIntervalRepresentation { 
    Flat, 
    ThreeDimensional, 
    Rhomb, 
    Gradient, 
    __LAST
};

enum class GanttChartLinkType { 
    BeginEnd, 
    BeginBegin, 
    EndBegin, 
    EndEnd, 
    __LAST
};

enum class GanttChartScaleKeeping { 
    Fixed, 
    Period, 
    AllData, 
    Auto, 
    __LAST
};

enum class GanttChartValueTextRepresentation { 
    None, 
    Right, 
    __LAST
};

enum class GanttChartVerticalStretch { 
    None, 
    StretchRows, 
    StretchRowsAndData, 
    __LAST
};

enum class GaugeChartValueRepresentation { 
    Needle, 
    Sector, 
    __LAST
};

enum class GaugeChartValuesScaleLabelsLocation { 
    AtScale, 
    InsideScale, 
    __LAST
};

enum class MaxSeries { 
    NotDefined, 
    Limited, 
    Percent, 
    __LAST
};

enum class PivotChartLabelsOrientation { 
    TopLevelsVertical, 
    AllLevelsVertical, 
    AllLevelsHorizontal, 
    __LAST
};

enum class PivotChartScaleKeeping { 
    AllValues, 
    ValuesCount, 
    MinimumWidth, 
    __LAST
};

enum class PivotChartType { 
    Column, 
    Column3D, 
    __LAST
};

enum class PivotChartValuesShowMode { 
    AllValues, 
    LastLevelValues, 
    __LAST
};

enum class RadarChartScaleType { 
    Circle, 
    Polygon, 
    __LAST
};

enum class TimeScaleDayFormat { 
    MonthDay, 
    WeekDay, 
    MonthDayWeekDay, 
    WeekDayMonthDay, 
    __LAST
};

enum class TimeScalePosition { 
    Top, 
    Bottom, 
    Left, 
    Right, 
    __LAST
};

enum class TimeScaleUnitType { 
    Second, 
    Minute, 
    Hour, 
    Day, 
    Week, 
    Month, 
    Quarter, 
    Year, 
    __LAST
};

} } } } 
#endif
