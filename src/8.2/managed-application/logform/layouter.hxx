#ifndef V81C_V8_2_MANAGEDAPPLICATION_LOGFORM_LAYOUTER_INCLUDED
#define V81C_V8_2_MANAGEDAPPLICATION_LOGFORM_LAYOUTER_INCLUDED
namespace v81c { namespace v8_2 { namespace managedapplication { namespace logform { namespace layouter { 
enum class BWDValue { 
    _true, 
    _false, 
    _auto, 
    __LAST
};

enum class CaptionButtonsLocation { 
    Left, 
    Right, 
    __LAST
};

enum class ChoiceButtonRepresentation { 
    Auto, 
    ShowInDropList, 
    ShowInDropListAndInInputField, 
    ShowInInputField, 
    __LAST
};

enum class ChoiceObjects { 
    Items, 
    Folders, 
    FoldersAndItems, 
    __LAST
};

enum class ColumnMode { 
    Text, 
    Input, 
    Check, 
    Image, 
    __LAST
};

enum class ColumnsGroup { 
    Horizontal, 
    Vertical, 
    InCell, 
    __LAST
};

enum class ControlCategory { 
    Prim, 
    Sec, 
    Ttl, 
    ExTlp, 
    GrpTtl, 
    Clp, 
    SearchStringRepresentation, 
    ViewStatusRepresentation, 
    SearchControl, 
    __LAST
};

enum class Direction { 
    Hor, 
    Ver, 
    __LAST
};

enum class ElementShiftMode { 
    None, 
    Top, 
    Bottom, 
    Left, 
    SmallRight, 
    BigRight, 
    __LAST
};

enum class FormDateSelectionMode { 
    Single, 
    Multiple, 
    Interval, 
    __LAST
};

enum class FormElementOrientation { 
    Horizontal, 
    Vertical, 
    __LAST
};

enum class FormEnterKeyBehavior { 
    ControlNavigation, 
    DefaultButton, 
    __LAST
};

enum class FormPanelTabsRepresentation { 
    None, 
    Top, 
    Bottom, 
    LeftHorizontal, 
    RightHorizontal, 
    Swipe, 
    __LAST
};

enum class FormProgressBarRepresentation { 
    Smooth, 
    Broken, 
    BrokenTilt, 
    __LAST
};

enum class FormTrackBarMarking { 
    DontShow, 
    TopLeft, 
    BottomRight, 
    BothSides, 
    __LAST
};

enum class IncompleteItemChoiceMode { 
    OnEnterPressed, 
    OnActivate, 
    __LAST
};

enum class ItemHorizontalAlignment { 
    Left, 
    Center, 
    Right, 
    Auto, 
    __LAST
};

enum class ItemVerticalAlignment { 
    Top, 
    Bottom, 
    Center, 
    __LAST
};

enum class MenuElementRepresentation { 
    Text, 
    Picture, 
    TextPicture, 
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

enum class SearchOnInputForbiddenMode { 
    Allow, 
    Forbidden, 
    Check, 
    __LAST
};

enum class SelectionShowMode { 
    WhenActive, 
    Always, 
    __LAST
};

enum class StretchableMode { 
    No, 
    Hor, 
    Ver, 
    Any, 
    __LAST
};

enum class TableFieldEditMode { 
    Directly, 
    Enter, 
    EnterOnInput, 
    __LAST
};

enum class TableInitialListView { 
    Beginning, 
    End, 
    Auto, 
    __LAST
};

enum class TableInitialTreeView { 
    NoExpand, 
    ExpandTopLevel, 
    ExpandAllLevels, 
    __LAST
};

enum class TableRowInputMode { 
    EndOfList, 
    EndOfWindow, 
    AfterCurrentRow, 
    BeforeCurrentRow, 
    __LAST
};

enum class TableRowSelectionMode { 
    Cell, 
    Row, 
    __LAST
};

enum class TableScrollBarUse { 
    DontUse, 
    UseAlways, 
    AutoUse, 
    __LAST
};

enum class TableSelectionMode { 
    SingleRow, 
    MultiRow, 
    __LAST
};

enum class ViewScalingMode { 
    Auto, 
    Normal, 
    Large, 
    __LAST
};

enum class WarningBeforeEditRepresentation { 
    Show, 
    DontShow, 
    __LAST
};

} } } } } 
#endif
