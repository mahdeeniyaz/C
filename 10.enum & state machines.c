#include<stdio.h>  

enum KeyFobState {
    KEY_DISARMED,
    KEY_AUTHENTICATING,
    KEY_ARMED,
};

int main(void) {
    enum KeyFobState current_state = KEY_AUTHENTICATING; //initial declaration and initialization

    switch (current_state) {
        case KEY_DISARMED:
            printf("Key is disarmed. Unable to turn engine on");
            break;
        case KEY_AUTHENTICATING:
            printf("Key is authenticating. Authentication granted");
            current_state = KEY_ARMED; //reassignment (Not initialization)
            break;
        case KEY_ARMED:
            printf("Key is armed. Access granted to control & manuever vehicle");
            break;
        default:
            printf("SECURITY ALERT: Unknown state!");
            break;
    }
}