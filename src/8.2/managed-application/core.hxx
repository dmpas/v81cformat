#ifndef V81C_V8_2_MANAGEDAPPLICATION_CORE_INCLUDED
#define V81C_V8_2_MANAGEDAPPLICATION_CORE_INCLUDED
namespace v81c { namespace v8_2 { namespace managedapplication { namespace core { 
enum class Alias { 
    en, 
    ru, 
    __LAST
};

enum class ApplicationUsePurpose { 
    PersonalComputer, 
    MobileDevice, 
    __LAST
};

enum class ClientRunMode { 
    Auto, 
    ManagedApplication, 
    OrdinaryApplication, 
    __LAST
};

enum class CommandGroupCategory { 
    NavigationPanel, 
    ActionsPanel, 
    FormNavigationPanel, 
    FormCommandBar, 
    __LAST
};

enum class RequiredMobileApplicationPermissions { 
    Multimedia, 
    Location, 
    Contacts, 
    Calendars, 
    Telephony, 
    PushNotification, 
    LocalNotification, 
    __LAST
};

enum class SectionPanelRepresentation { 
    Picture, 
    PictureAndText, 
    Text, 
    PictureOnTopAndText, 
    PictureOnLeftAndText, 
    __LAST
};

enum class StyleEntryKind { 
    color, 
    font, 
    border, 
    line, 
    __LAST
};

} } } } 
#endif
