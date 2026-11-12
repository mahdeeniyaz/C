#include <stdio.h>

struct CAN_Frame {
    int id;
    int payload[4];
    float timestamp;
    int is_authenticated;
};

int main(void) {
    struct CAN_Frame rx_frame = { 0x1A0, {0x02, 0x10, 0xC0, 0x00}, 4.125, 1 };

    printf("--- Incoming CAN Frame Telemetry ---\n");
    printf("CAN ID : 0x%X\n", rx_frame.id);
    printf("Timestamp : %.3f sec\n", rx_frame.timestamp);
    printf("Security Status: %s\n", rx_frame.is_authenticated ? "AUTHENTICATED" : "UNTRUSTED");

    struct CAN_Frame *frame_ptr = &rx_frame;

    printf("\n--- Inspecting via Structure Pointer (->) ---\n");
    printf("Pointer Address: %p\n", (void*)frame_ptr);
    printf("CAN ID via ptr : 0x%X\n", frame_ptr->id);
    frame_ptr->is_authenticated = 0;
    printf("Updated Status : %s\n", rx_frame.is_authenticated ? "AUTHENTICATED" : "UNTRUSTED");

    return 0;
}