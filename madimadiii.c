/* Note: Dont get confused on the "attempt" part since it is 
just like the common for loop. The variable was just 
renamed as attempt. */

#include <stdio.h>
#include <stdlib.h>

int main() {
int option;
int userID = 0, passCode = 0;
int confirm;
int enteredID, enteredPass;
int registered = 0;
int attempt;


    while(1) {
    printf("\nStudent Account Access\n1. Login\n2. Register\n3. Exit\nChoose: ");
    scanf("%d", &option);

    if (option == 2) {
        printf("\nEnter User ID: ");
        scanf("%d", &userID);

        printf("Enter Passcode: ");
        scanf("%d", &passCode);

        printf("Confirm Entered Passcode: ");
        scanf("%d", &confirm);

            if (passCode != confirm) {
                system("cls"); printf("Passcode did not match. Please try again.\n");
            } else {
                registered = 1;

                system("cls"); printf("Re-enter your registered account\n");

                for (attempt = 3; attempt > 0; attempt--) {
                    printf("\nEnter Registered Account: ");
                    scanf("%d", &enteredID);
                    printf("Enter Passcode: ");
                    scanf("%d", &enteredPass);

                        if (enteredID == userID && enteredPass == passCode) {
                            printf("Welcome, User %d\n", enteredID);
                            break;
                        } else {
                            system("cls"); printf("Invalid Account. Please Try Again. Attempts Left: %d\n", attempt - 1); 
                        }
                    }
                if (attempt == 0) {
                    system("cls"); printf("Too many failed attempts. Program Terminated.\n"); return 0;
                }
                }
            } else if (option == 1) {
                if (!registered) {
                    system("cls"); printf("No Account can be found. Please register an account.\n"); 
                } else {
                    for (attempt = 3; attempt > 0; attempt--) {
                    printf("\nEnter Registered Account: ");
                    scanf("%d", &enteredID);
                    printf("Enter Passcode: ");
                    scanf("%d", &enteredPass);

                        if (enteredID == userID && enteredPass == passCode) {
                            printf("Welcome, User %d\n", enteredID);
                            break;
                        } else {
                            system("cls"); printf("Invalid Account. Please Try Again. Attempts Left: %d\n", attempt - 1); 
                        }
                    }
                    if (attempt == 0) {
                        system("cls"); printf("Too many failed attempts. Program Terminated.\n"); return 0;
                    }
                }
            } else if (option == 3) {
                system("cls"); printf("Thank you for choosing University of Caloocan City.\nCode Terminated.\n"); return 0;
            } else {
                system("cls"); printf("Invalid Option Chose.\nChoose again.\n"); 
            }
    }
return 0;
}

