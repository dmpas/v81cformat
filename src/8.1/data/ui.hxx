#ifndef V81C_V8_1_DATA_UI_INCLUDED
#define V81C_V8_1_DATA_UI_INCLUDED
namespace v81c { namespace v8_1 { namespace data { namespace ui { 
enum class AutoColor { 
    _auto, 
    __LAST
};

enum class AutoSeriesSeparation { 
    None, 
    All, 
    Maximum, 
    Minimum, 
    __LAST
};

enum class ChartColorPalette { 
    Palette8, 
    Palette32, 
    __LAST
};

enum class ChartLabelType { 
    None, 
    Series, 
    Value, 
    Percent, 
    SeriesPercent, 
    SeriesValue, 
    SeriesValuePercent, 
    ValuePercent, 
    Point, 
    PointPercent, 
    PointValue, 
    PointValuePercent, 
    SeriesPoint, 
    SeriesPointPercent, 
    SeriesPointValue, 
    SeriesPointValuePercent, 
    __LAST
};

enum class ChartLabelsOrientation { 
    Horizontal, 
    Vertical, 
    Auto, 
    __LAST
};

enum class ChartLineType { 
    None, 
    Solid, 
    Dotted, 
    Dashed, 
    DashDotted, 
    DashDottedDotted, 
    __LAST
};

enum class ChartType { 
    Line, 
    Step, 
    StackedLine, 
    Area, 
    StackedArea, 
    NormalizedArea, 
    Column, 
    StackedColumn, 
    NormalizedColumn, 
    Column3D, 
    StackedColumn3D, 
    NormalizedColumn3D, 
    Bar, 
    StackedBar, 
    NormalizedBar, 
    Bar3D, 
    StackedBar3D, 
    NormalizedBar3D, 
    Pie, 
    Pie3D, 
    Stock, 
    OpenHighLowClose, 
    BarGraph, 
    CeilGraph, 
    TapeGraph, 
    PyramidGraph, 
    Waterfall, 
    WireframeSurface, 
    Honeycomb, 
    Surface, 
    ConvexSurface, 
    ConcaveSurface, 
    ShadedSurface, 
    RadarLine, 
    RadarArea, 
    RadarStackedLine, 
    RadarStackedArea, 
    RadarNormalizedArea, 
    Gauge, 
    Funnel, 
    Funnel3D, 
    NormalizedFunnel, 
    NormalizedFunnel3D, 
    __LAST
};

enum class ControlBorderType { 
    WithoutBorder, 
    Single, 
    Double, 
    Embossed, 
    Indented, 
    Underline, 
    DoubleUnderline, 
    Rounded, 
    Overline, 
    __LAST
};

enum class FontType { 
    Absolute, 
    WindowsFont, 
    StyleItem, 
    AutoFont, 
    __LAST
};

enum class GeographicalSchemeLineType { 
    None, 
    Solid, 
    Dotted, 
    Dashed, 
    DashDotted, 
    DashDottedDotted, 
    __LAST
};

enum class HorizontalAlign { 
    Left, 
    Center, 
    Right, 
    Justify, 
    Auto, 
    __LAST
};

enum class Key { 
    None, 
    BackSpace, 
    Space, 
    PageUp, 
    PageDown, 
    Home, 
    End, 
    Left, 
    Up, 
    Right, 
    Down, 
    Ins, 
    Del, 
    Tab, 
    Enter, 
    Esc, 
    _0, 
    _1, 
    _2, 
    _3, 
    _4, 
    _5, 
    _6, 
    _7, 
    _8, 
    _9, 
    A, 
    B, 
    C, 
    D, 
    E, 
    F, 
    G, 
    H, 
    I, 
    J, 
    K, 
    L, 
    M, 
    N, 
    O, 
    P, 
    Q, 
    R, 
    S, 
    T, 
    U, 
    V, 
    W, 
    X, 
    Y, 
    Z, 
    Num0, 
    Num1, 
    Num2, 
    Num3, 
    Num4, 
    Num5, 
    Num6, 
    Num7, 
    Num8, 
    Num9, 
    NumMultiply, 
    NumAdd, 
    NumSubtract, 
    NumDecimal, 
    NumDivide, 
    F1, 
    F2, 
    F3, 
    F4, 
    F5, 
    F6, 
    F7, 
    F8, 
    F9, 
    F10, 
    F11, 
    F12, 
    Break, 
    __LAST
};

enum class PictureFormat { 
    BMP, 
    EMF, 
    GIF, 
    Icon, 
    JPEG, 
    PNG, 
    TIFF, 
    WMF, 
    UnknownFormat, 
    __LAST
};

enum class PivotChartType { 
    Column, 
    Column3D, 
    __LAST
};

enum class SizeChangeMode { 
    Normal, 
    QuickChange, 
    __LAST
};

enum class SpreadsheetDocumentCellLineType { 
    None, 
    Solid, 
    Dotted, 
    Double, 
    ThinDashed, 
    ThickDashed, 
    LargeDashed, 
    __LAST
};

enum class SpreadsheetDocumentDrawingLineType { 
    None, 
    Solid, 
    Dashed, 
    Dotted, 
    DashDotted, 
    DashDottedDotted, 
    __LAST
};

enum class TextEncoding { 
    UTF16, 
    UTF8, 
    ANSI, 
    OEM, 
    System, 
    __LAST
};

enum class UseOutput { 
    Auto, 
    Enable, 
    Disable, 
    __LAST
};

enum class VerticalAlign { 
    Top, 
    Center, 
    Bottom, 
    __LAST
};

} } } } 
#endif
