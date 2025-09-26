#include <stdio.h>
#include "helper.h"
void (*fptr)(int[],int);
int fillmenu(int arr[], int size){
    int exists = 0;
    int choice = 0;
    while (exists != 1) {
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
}




int sortmenu(int arr[], int size){}

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
        printf("3. Sort the array");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1: {
                fillmenu(twelve,i);

                };
            case 2: {
                printf(twelve);
            }
            case 3: {
                sortmenu(twelve,i);
            }
            }
        }
    }


//
// Created by Kyler Belshaw on 9/25/25.
//