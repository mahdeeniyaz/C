#include <stdio.h>
#include <stdbool.h>

int main(void) {
    /* Key Fob Authentication Retries */
    int attempts = 1;
    bool authorized = false;
    char pwd = 'a';
    int n=5; //no.of maximum attempts allowed

    while (attempts <= 5) {
        printf("Authentication attempt %d of %d...\n", attempts, n);
        printf("Enter the password to start the engine :");
        // Simulating key fob verification
        scanf(" %c", &pwd);
        if (pwd == 'M') {
            authorized = true;
            printf("Password entered - %c\n", pwd);
            printf("SUCCESS: Key Fob Recognized!\n\n");
        }
        if (authorized) {
            break;
        }
        printf("%d attempts remaining\n", (n-attempts));
        attempts++;
    }

    if (!authorized) {
        printf("FAILED: Key fob not recognized after 3 attempts.\n\n");
    }

    //for loop
    printf("Diagnostic ECU firmware flash beginning\n");
    for(int flash_countdown=5; flash_countdown>0; flash_countdown--) {
        printf("Firmware Flash in: [%d] seconds...\n", flash_countdown);
    }
}