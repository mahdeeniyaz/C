#include <stdio.h>

struct VehicleTelemetry {
    int engine_rpm;
    float vehicle_speed;
    char current_gear;
    int door_locked;
}; //don't forget this SeMiCoLoN


int main() {
    printf("\n");

    struct VehicleTelemetry my_car = {2800, 85.5, 'D', 1}; //always include this = sign when initializing structure variables

    printf("Using dot '.' operator\n");
    //we directly access the members of the structure using the dot operator
    printf("Engine RPM is %d RPM\n", my_car.engine_rpm);
    printf("Vehicle speed is %.1f KMPH\n", my_car.vehicle_speed);
    printf("Current gear is %c\n", my_car.current_gear);
    printf("Door lock status is %d\n", my_car.door_locked);
    printf("Door is %s\n", my_car.door_locked ? "LOCKED" : "UNLOCKED");    
    
    
    printf("\nUsing pointer '->' operator\n");
    struct VehicleTelemetry *telemetry_ptr = &my_car; //we first create a pointer to point to the structure variable my_car
    //now we can directly use telemetry_ptr as the pointer instead of *mycar
    printf("Engine RPM is %d RPM\n", telemetry_ptr->engine_rpm);
    printf("Vehicle speed is %.1f KMPH\n", telemetry_ptr->vehicle_speed);
    printf("Current gear is %c\n", telemetry_ptr->current_gear);
    printf("Door lock status is %d\n", telemetry_ptr->door_locked);
    printf("Door is %s\n", telemetry_ptr->door_locked ? "LOCKED" : "UNLOCKED");



    return 0;
}

// refer notes if this is difficult to comprehend




















