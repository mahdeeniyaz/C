/* Step 5: Modular ECU Speed Check */
#include <stdio.h>
#include <stdbool.h>

/* also can use
// Function definition: checks if vehicle exceeds safe speed threshold
int check_speed_limit(float speed) {
    if (speed > 120.0) { //max_safe_speed = 120 km/h
        return 1; // 1 = Overspeed alert!
    } else {
        return 0; // 0 = Safe speed
    }
}*/

bool check_speed_limit(float speed) {
    return speed > 120.0; 
}

    //just a fun way to try & guess whether driver is authorized to bypass the speed limit
bool speed_limit_bypass(int passcode) {
    return passcode == 4321; //4321 is the authorization pin to receive access to bypass speed limit
}

int main(void) {
    float current_speed;
    printf("Enter the current speed: "); //usually automated, just practising here!
    scanf(" %f", &current_speed);

    // Call the custom function and store the result
    int is_overspeeding = check_speed_limit(current_speed);

    printf("is_overspeeding bool function value = %d\n", is_overspeeding); 
    //to show how bool value affects my check_speed_limit function

    if (is_overspeeding) {
        printf("ECU ALERT: Speed limit exceeded! Governor activated.\n");
    } else {
        printf("ECU: Speed within normal operating parameters.\n");
    }
    printf("\n");

    //just a fun way to try & guess whether driver is authorized to bypass the speed limit

    int entered_pin = 0;
    printf("Enter the speed_bypass pin here: ");
    scanf(" %d", &entered_pin);
    if (speed_limit_bypass(entered_pin)) {
        printf("You're authorized to bypass vehicle speed limit"); //maybe the driver is a doctor or fireman or policeman
    }
    else {
        printf("You're NOT authorized to bypass vehicle speed limit");
    }

    return 0;
}