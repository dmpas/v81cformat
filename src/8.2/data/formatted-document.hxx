#ifndef V81C_V8_2_DATA_FORMATTEDDOCUMENT_INCLUDED
#define V81C_V8_2_DATA_FORMATTEDDOCUMENT_INCLUDED
namespace v81c { namespace v8_2 { namespace data { namespace formatteddocument { 
enum class FormattedDocumentFileType { 
    TXT, 
    ANSITXT, 
    HTML, 
    __LAST
};

enum class FormattedDocumentItemType { 
    Text, 
    Picture, 
    Linefeed, 
    __LAST
};

enum class HorizontalAlignment { 
    Left, 
    Center, 
    Right, 
    Justify, 
    Auto, 
    __LAST
};

enum class ParagraphType { 
    Usual, 
    Bulleted, 
    Numbered, 
    __LAST
};

} } } } 
#endif
