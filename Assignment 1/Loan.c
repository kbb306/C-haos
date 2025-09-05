#include<stdio.h>
#include <math.h>
//Constants
const int loanlength = 10;
const double interest = .03;

int main() {
    //Declare vars
    int salary, housing, car, groceries, utility;
    // Get input
    printf("Let's see how in debt you're gonna be.");
    printf("Enter the following numbers: \n");
    printf("1. Salary\n");
    scanf("%d", &salary);
    printf("2. Housing\n");
    scanf("%d", &housing);
    printf("3. Car\n");
    scanf("%d", &car);
    printf("4. Groceries\n");
    scanf("%d", &groceries);
    printf("5. Utility\n");
    scanf("%d", &utility);
    // Actual math
    int expense = housing + car + groceries + utility;
    float payment = ((salary/12) - expense);
    float denom = pow((1 - (interest/12)),12*loanlength);
    float mult = payment/(interest/12);
    float max = mult*(1/denom);
    printf("Your monthly payment is:  $%.2f \n", payment);
    printf("Your maximum loan is: $%.0f",max);
    return 0;
}
// Created by kylerbelshaw on 9/4/2025.
//