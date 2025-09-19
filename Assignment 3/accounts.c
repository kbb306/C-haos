//
// Created by User on 9/18/2025.
//
#include <stdio.h>
#include "accounts.h"
#include <stdio.h>

double balance;

void deposit(double x) {
    if (x > 0.0) {
        balance = balance + x;
    }
    else {
        printf("You can't deposit %f, balance %.2f\n", x, balance);
    }
};

int withdraw (double x) {
    if (x > 0.0 && balance >= x) {
        balance = balance - x; // Unsure why 'balance -- x was invalid
        return 1;
    }
    else {
        printf("No withdrawl made, balance is %.2f\n",balance);
        return 0;
    }
}

void check_balance() {
    printf("Balance is $%.2f\n",balance);
}

int open_account(double input) {
    printf("You are opening an account at the Bank of Evil.\n"); // Guess the reference!
    printf("Please deposit at least $50. ");
    scanf("%lf",&input);
    if (input < 50.00) {
        printf("%.2f is less than $50. Please deposit at least $50",input);
        return 0;
    }
    deposit(input);
    return 1;
}



