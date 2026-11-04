/*Var & Data type*/
#include <stdio.h>
int main(void) {
// Variable Ikclarations
    int engine_rpm = 25;
    float vehicle_speed = 64.5;
    char gear = 'D';
    int door_locked = 1;

    // Output formatted strings
    printf(" -- ECU Live Telemetry --\n");
    printf("Selected Gear: %c\n", gear);
    printf("Engine Speed : %d RPM\n", engine_rpm);
    printf("Vehicle Speed: %1.f km/h\n", vehicle_speed); //
    printf("Door lock status: %d", door_locked);
    return 0;
}
