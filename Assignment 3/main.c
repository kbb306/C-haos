#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "accounts.h"
int main() {
    int x = 0;
    while(x == 0) {
        x = open_account(0.00);
    }
    int choice = 0;
    while(choice != 4) {
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
            while (input < 0.00) {
                printf("Please enter a valid amount to deposit: ");
                scanf("%lf",&input);
            }
            deposit(input);

            }
        else if(choice == 2) {
            int result = 3;
            double input;
            while (result > 1) {
                printf("Enter an amount to withdraw: ");
                scanf("%d",&input);
                if (input < 0.00) {
                    result = 3;
                    printf("Invalid input, try again.\n");
                }
                else {
                    result = withdraw(input);
                    if (result == 0){printf("Withdrawl cancelled");};
                }

            }

        }
        else if(choice == 3) {
                check_balance();
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