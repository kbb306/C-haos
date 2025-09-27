#include <stdio.h>
#include "helper.h"
void (*fptr)(int[],int);
int fillmenu(int arr[], int size){
    int exists = 0;
    int choice = 0;
    while (exists != 1) { //  Name is an artifact from earlier version where user would be prompted to create array here. Still works though!
        printf("Would you like to fill the array with...\n");
        printf("1. Odd Numbers\n");
        printf("2. Even Numbers\n");
        printf("3. Random Numbers\n");
        printf("Choose your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                fptr = &fill_array_odd;
                break;
            }

            case 2: {
                fptr = &fill_array_even;
                break;
            }

            case 3: {
                fptr = &fill_array_random;
                break;
            }

        }
    fptr(arr, size);
    exists = 1;
    }
    return 0;
}




int sortmenu(int arr[], int size) {
    int choice = 0;
    while (choice != 3) { //Really stubborn infinite loop bug here, keeping fptr from ever being called. Fixed by adding choice = 3 to the end of all cases.
        printf("Would you like to sort the array in...\n");
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("3. Don't sort or quit\n");
        printf("Choose your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                fptr = &sort_array_ascend;
                choice = 3;
                break;
            }
            case 2: {
                fptr = &sort_array_descend;
                choice = 3;
                break;
            }
            case 3: {
                fptr = &cancel; //I don't even know if this is getting called.
                choice = 3;
                break;
            }
        }
    }
    printf("Sorting....");
    fptr(arr, size);
    return 0;
}

int main() {
    int choice = 0;
    int i = 0;
    while (i <=1) {
        printf("Please enter an array size");
        scanf("%d",&i);
        if (i <= 1) {
            printf("Invalid Size\n");
        }
    }
    int twelve[i];
    while (choice != 4) {
        printf("Welcome to the Array Display!\n");
        printf("1. Fill the array\n");
        printf("2. Print array\n");
        printf("3. Sort the array\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1: {
                fillmenu(twelve,i);
                break;
                };
            case 2: {
                fptr = &print_array;
                fptr(twelve, i);
                break;
            };
            case 3: {
                sortmenu(twelve,i);
                break;
            };
            }
        }
    }


//
// Created by Kyler Belshaw on 9/25/25.
//