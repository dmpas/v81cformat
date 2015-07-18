#ifndef V81C_V8_2_DATA_GRAPHSCHEME_INCLUDED
#define V81C_V8_2_DATA_GRAPHSCHEME_INCLUDED
namespace v81c { namespace v8_2 { namespace data { namespace graphscheme { 
enum class ArrowStyle { 
    None, 
    Filled, 
    Blank, 
    __LAST
};

enum class ConnectorLineType { 
    Solid, 
    Dashed, 
    Dotted, 
    DashDotted, 
    DashDottedDotted, 
    __LAST
};

enum class ConnectorTextLocation { 
    FirstSegment, 
    Middle, 
    __LAST
};

enum class FitPageMode { 
    Auto, 
    PageWidth, 
    Proportionally, 
    __LAST
};

enum class GraphicalSchemaGridDrawMode { 
    None, 
    Dots, 
    Chess, 
    Lines, 
    __LAST
};

enum class GraphicalSchemaItemPictureLocation { 
    Left, 
    Top, 
    Right, 
    Bottom, 
    Center, 
    __LAST
};

enum class GraphicalSchemaShapes { 
    None, 
    File, 
    Folder, 
    RightArrow, 
    LeftRightArrow, 
    VerticalBrackets, 
    Document, 
    Block, 
    Ellipse, 
    LeftArrow, 
    UpArrow, 
    DownArrow, 
    UpDownArrow, 
    HorizontalBrackets, 
    __LAST
};

} } } } 
#endif
