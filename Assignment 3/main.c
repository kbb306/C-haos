#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "accounts.h"
int main() {
    int x = 0;
    while(x == 0) {
        x = open_account(0.00);
    } // Initial account setup loop based on open_account()'s return code

    int choice = 0;
    while(choice != 4) { // Trying to set the conditions for this loop baffled me until I looked back at my earlier work.
        printf("Welcome to the ATM of Evil!\n");
        printf("1. Deposit Balance\n");
        printf("2. Withdraw Balance\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Please choose an option: ");

        scanf("%d",&choice);
        if(choice == 1) {
            double input;
            printf("Enter an amount to deposit: ");
            scanf("%lf",&input);
            while (input < 0.00) { //Validate you aren't depositing an amount < 0. This wouldn't be necessary if deposit() returned a status code
                printf("Please enter a valid amount to deposit: ");
                scanf("%lf",&input);
            }
            deposit(input);

            }
        else if(choice == 2) {
            int result = 0;
            double input;
            while (result != 1) { // Validation loop based on withdraw()'s return vode
                printf("Enter an amount to withdraw: ");
                scanf("%lf",&input);
                result = withdraw(input);
            }

        }
        else if(choice == 3) {
                check_balance(); // Nothing much here
        }

        else if(choice == 4) {
            printf("Goodbye\n"); // So it doesn't print "Invalid option" when exiting.
        }

        else {
            printf("Invalid Option");
        }
        }
    return 0;
    }
//
// Created by User on 9/18/2025.
//