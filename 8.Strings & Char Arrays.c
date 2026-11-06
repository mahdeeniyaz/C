/* Step 8: ECU Diagnostic String & VIN Verification */
#include <stdio.h>
#include <string.h> //for string functions like strlen() and strcmp()
//bool.h

int main(void) {
    // A 17-character VIN requires at least 18 bytes for the null terminator '\0'
    char vin[18] = "1FA6P8CF0H5123456";
    char received_cmd[10] = "DIAG_OK";

    printf("--- ECU System Identification ---\n");
    printf("Registered VIN : %s\n", vin);
    printf("VIN Character Length: %zu bytes\n\n", strlen(vin)); // strlen counts characters excluding '\0'

    // Comparing strings using strcmp()
    // strcmp(str1, str2) returns 0 if both strings are IDENTICAL
    if (strcmp(received_cmd, "DIAG_OK") == 0) {
        printf("SECURITY: Valid Diagnostic Command Recognized!\n");
    }
    else {
        printf("SECURITY ALERT: Invalid Command Received!\n");
    }
    printf("strcmp(received_cmd, \"DIAG_OK\") returned value %d.\n\n", strcmp(received_cmd, "DIAG_OK"));



    //Checkpoint challenge
    printf("\n---Checkpoint Challenge---\n");
    const char command[20] = "UNLOCK_DOOR";
    if (strcmp(command, "UNLOCK_DOOR") == 0) {
        printf("Checkpoint Challenge: Command is valid.\n");
    } else {
        printf("Checkpoint Challenge: Command is invalid.\n");
    }
    return 0;
}