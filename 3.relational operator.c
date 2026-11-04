    #include <stdio.h>
    #include <stdbool.h>

    int main(void) {
        float current_speed = 10; // km/h
        int door_locked = 0;        // 0 = Unlocked, 1 = Locked

        printf("Current Speed: %.1f km/h\n\n", current_speed);

        // Security Rule: If speed exceeds 15.0 km/h, auto-lock doors
        if (current_speed > 15.0) {
            door_locked = 1;
            printf("SECURITY: Speed threshold reached. Doors LOCKED automatically.\n");
        } else {
            printf("SECURITY: Speed low. Doors remain UNLOCKED.\n");
        }
        printf("Current Door Lock Status: %d\n\n", door_locked);
        
        // Security Rule2: To start engine
        bool in_park = 0; //ensure parking brakes are active
        bool key_authenticated =1; //ensure cryptographic authentication verified
        if (in_park && key_authenticated) {
            printf("Vehicle can start");
        }
        else if (!in_park && key_authenticated) {
            printf("Shift gear to 'Park' mode to start the engine");
        }
        else {
            door_locked = 1;
            printf("You are not authorized to start the engine.");
        }
        return 0;
    }