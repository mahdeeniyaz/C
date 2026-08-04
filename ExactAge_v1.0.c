#include<stdio.h>

int main() {
    char Initial1; //to get 1st initial of user
    printf("Enter the 1st initial of your name here: ");
    scanf(" %c", &Initial1);
    
    char Initial2 = 'N'; //to get 2nd initial of user
    printf("Enter the 2nd initial of your name here: ");
    scanf(" %c", &Initial2);

    printf("User is %c.%c.", Initial1, Initial2);

}