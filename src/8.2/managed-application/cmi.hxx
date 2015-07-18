#ifndef V81C_V8_2_MANAGEDAPPLICATION_CMI_INCLUDED
#define V81C_V8_2_MANAGEDAPPLICATION_CMI_INCLUDED
namespace v81c { namespace v8_2 { namespace managedapplication { namespace cmi { 
enum class CommandParameterUseMode { 
    Single, 
    Multiple, 
    __LAST
};

enum class FuncMenuGroupType { 
    Simple, 
    SubSystem, 
    Section, 
    Group, 
    Actions, 
    SeeAlso, 
    __LAST
};

enum class GroupCategory { 
    undefined, 
    navigator, 
    form, 
    panel, 
    toolbar, 
    __LAST
};

} } } } 
#endif
