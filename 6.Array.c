/* Step 6: ECU Temperature Sensor Array */
#include <stdio.h>

int main(void) {
    // Array of 5 thermal sensor readings from an ECU board (in °C)
    int sensor_temps[5] = {75, 82, 88, 95, 115};

    printf("--- ECU Temperature Sensor Scan ---\n");

    // Loop through array indices 0 to 4
    for (int i = 0; i < 5; i++) {
        printf("Sensor [%d]: %d°C\n", i, sensor_temps[i]);
        
        if (sensor_temps[i] > 100) {
            printf("  -> WARNING: Overheating detected on Sensor [%d]!\n", i);
        }
    }

    //Now comes the practice!
    printf("\n--- Practice: ECU CAN BUS Frame Security Scanner ---\n");
    int can_frame[8] = {10, 45, 120, 225, 0, 8, 14, 255};
    for (int c=0; c<8; c++) {
        printf("CAN Frame Byte [%d]: %d\n", c, can_frame[c]);
        if (can_frame[c] > 200) {
        printf("ANOMALY DETECTED: Suspicious payload value at Byte [%d]! value: %d\n", c, can_frame[c]);
        }
    }
    return 0;
}