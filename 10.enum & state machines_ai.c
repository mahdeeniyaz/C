//the act of naming things in a list, separately, one by one

#include <stdio.h>

enum VehicleState {
    STATE_PARKED,
    STATE_DRIVING,
    STATE_EMERGENCY_STOP
};

int main(void) {
    enum VehicleState current_state = STATE_PARKED; //initial declaration and initialization

    printf("--- Vehicle ECU State Machine ---\n");

    switch (current_state) {
        case STATE_PARKED:
            printf("Current State: PARKED. Doors unlocked.\n");
            break;

        case STATE_DRIVING:
            printf("Current State: DRIVING. CAN monitoring active.\n");
            break;

        case STATE_EMERGENCY_STOP:
            printf("Current State: EMERGENCY STOP!\n");
            break;

        default: //different from the others
            printf("SECURITY ALERT: Unknown state!\n");
            break;
    }

    /*equivalent switch statement using if-else statements
    if (current_state == STATE_PARKED) {
        printf("Current State: PARKED. Doors unlocked.\n");
    }
    else if (current_state == STATE_DRIVING) {
        printf("Current State: DRIVING. CAN monitoring active.\n");
    }
    else if (current_state == STATE_EMERGENCY_STOP) {
        printf("Current State: EMERGENCY STOP!\n");
    }
    else {
        printf("SECURITY ALERT: Unknown state!\n");
    }
    */

    return 0;   
}