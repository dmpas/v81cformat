#ifndef V81C_V8_2_DATA_SPREADSHEET_INCLUDED
#define V81C_V8_2_DATA_SPREADSHEET_INCLUDED
namespace v81c { namespace v8_2 { namespace data { namespace spreadsheet { 
enum class DimensionAttributePlacementType { 
    WithDimensions, 
    Separately, 
    Together, 
    __LAST
};

enum class DimensionPlacementType { 
    Together, 
    Separately, 
    SeparatelyAndInTotalsOnly, 
    __LAST
};

enum class DuplexPrintingType { 
    None, 
    FlipPagesLeft, 
    FlipPagesUp, 
    __LAST
};

enum class NamedItemType { 
    Cells, 
    Drawing, 
    EmbeddedTable, 
    DataSource, 
    __LAST
};

enum class PageOrientation { 
    Portrait, 
    Landscape, 
    __LAST
};

enum class PagePlacementAlternation { 
    Auto, 
    DontUse, 
    MirrorOnLeft, 
    MirrorOnTop, 
    __LAST
};

enum class PictureSize { 
    RealSize, 
    Stretch, 
    Proportionally, 
    Tile, 
    AutoSize, 
    __LAST
};

enum class PivotTableLinesShowType { 
    Auto, 
    Always, 
    __LAST
};

enum class PrintAccuracy { 
    Auto, 
    Accurate, 
    __LAST
};

enum class SpreadsheetDocumentAreaFillType { 
    Text, 
    Parameter, 
    Template, 
    __LAST
};

enum class SpreadsheetDocumentCellAreaType { 
    Table, 
    Rows, 
    Columns, 
    Rectangle, 
    __LAST
};

enum class SpreadsheetDocumentDetailUse { 
    Cell, 
    Row, 
    WithoutProcessing, 
    __LAST
};

enum class SpreadsheetDocumentDrawingType { 
    Line, 
    Rectangle, 
    Text, 
    Ellipse, 
    Picture, 
    Object, 
    Group, 
    Chart, 
    GanttChart, 
    PivotChart, 
    Dendrogram, 
    GeographicalSchema, 
    Control, 
    Comment, 
    __LAST
};

enum class SpreadsheetDocumentFileType { 
    MXL, 
    XLS, 
    HTML, 
    TXT, 
    MXL7, 
    HTML3, 
    HTML4, 
    HTML5, 
    XLS95, 
    XLS97, 
    ANSITXT, 
    DOCX, 
    XLSX, 
    ODS, 
    PDF, 
    __LAST
};

enum class SpreadsheetDocumentGroupHeaderPlacement { 
    Auto, 
    Begin, 
    End, 
    __LAST
};

enum class SpreadsheetDocumentPatternType { 
    WithoutPattern, 
    Solid, 
    Pattern1, 
    Pattern2, 
    Pattern3, 
    Pattern4, 
    Pattern5, 
    Pattern6, 
    Pattern7, 
    Pattern8, 
    Pattern9, 
    Pattern10, 
    Pattern11, 
    Pattern12, 
    Pattern13, 
    Pattern14, 
    Pattern15, 
    Pattern16, 
    Pattern17, 
    __LAST
};

enum class SpreadsheetDocumentStepDirectionType { 
    ByRows, 
    ByColumns, 
    WithoutMove, 
    __LAST
};

enum class SpreadsheetDocumentTextPlacementType { 
    Auto, 
    Cut, 
    Block, 
    Wrap, 
    __LAST
};

enum class StandardAppearance { 
    None, 
    Stone, 
    Classic, 
    Classic2, 
    Classic3, 
    Spring, 
    Summer, 
    Autumn, 
    Winter, 
    Asphalt, 
    Copper, 
    Bronze, 
    Platinum, 
    Silver, 
    Turquoise, 
    Sand, 
    Grass, 
    Ice, 
    Orange, 
    Textile, 
    Wood, 
    Interface, 
    __LAST
};

enum class TextPositionRelativeToPicture { 
    Left, 
    Right, 
    Top, 
    Bottom, 
    OnTop, 
    Auto, 
    __LAST
};

} } } } 
#endif
