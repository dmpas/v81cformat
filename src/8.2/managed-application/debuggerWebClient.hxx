#ifndef V81C_V8_2_MANAGEDAPPLICATION_DEBUGGERWEBCLIENT_INCLUDED
#define V81C_V8_2_MANAGEDAPPLICATION_DEBUGGERWEBCLIENT_INCLUDED
namespace v81c { namespace v8_2 { namespace managedapplication { namespace debuggerWebClient { 
enum class BPConditionState { 
    Unkwnown, 
    _true, 
    _false, 
    error, 
    __LAST
};

enum class ContinueVariant { 
    Unknown, 
    EvalExpr, 
    BPEvalExpr, 
    Continue, 
    Terminate, 
    __LAST
};

enum class EvalExprInterfaces { 
    NoneVariant, 
    ContextVariant, 
    EnumVatiant, 
    CollectionVariant, 
    __LAST
};

} } } } 
#endif
