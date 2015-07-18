#ifndef V81C_V8_3_DATA_EXT_INCLUDED
#define V81C_V8_3_DATA_EXT_INCLUDED
namespace v81c { namespace v8_3 { namespace data { namespace ext { 
enum class DeliverableNotificationSubscriberType { 
    APNS, 
    GCM, 
    __LAST
};

enum class SoundAlert { 
    None, 
    Default, 
    __LAST
};

} } } } 
#endif
