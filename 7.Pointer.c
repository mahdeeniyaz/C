/* Step 7: ECU Memory Address Inspection */
#include <stdio.h>

int main(void) {
    int ecu_status = 1; // 1 = Active
    
    // Declare a pointer to an integer (int*) and assign it the address of ecu_status
    
    int *pointer_status = &ecu_status;
    //take value of variable ecu_status(1) & stores it in the value of the pointer(the vaultbox) as 1.

    printf("--- ECU Memory Inspection ---\n");
    printf("Value of ecu_status       : %d (variable %%d)\n", ecu_status);
    printf("Memory Address of ecu_status: %p (pointer %%p)\n", (void*)&ecu_status); 
    // %p prints hex address

    printf("Address stored in pointer_status: %p\n", (void*)pointer_status);
    printf("Value dereferenced (*pointer_status): %d (variable %%d)\n\n", *pointer_status);

    // Modifying the variable via pointer
    *pointer_status = 0; // Overwrites ecu_status directly in memory!

    printf("--- After Remote Memory Override ---\n");
    printf("New value of ecu_status: %d\n", ecu_status);

    printf("\n--practice part--\n");
    int engine_rpm = 3000; // Engine RPM
    int *pointer_rpm = &engine_rpm; // Pointer to engine_rpm
    printf("Enginer RPM is: %d\n", engine_rpm);
    printf("Pointer_RPM value is: %d (pointing @engine_rpm)\n", *pointer_rpm);
    printf("Memory addresses of\n");
    printf("\tEngine_RPM: %p\n", &engine_rpm); //p prints HEX address
    printf("\tPointer_RPM address is %p\n", (void *)pointer_rpm);

    printf("\n--Kill engine--\n");
    *pointer_rpm = 0;
    printf("Engine RPM is now: %d\n", engine_rpm);
    printf("Pointer_RPM value is now: %d\n", *pointer_rpm);
    return 0;
}