#include <stdio.h>

int fillmenu(){
    int exists = 0;
    int choice = 0;
    while (exists != 1) {
        switch (choice) {
            case 1: {

            }
        }
    }
}


int printmenu(){}

int sortmenu(){}

int main() {
    int choice = 0;
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
                fillmenu();

                };
            case 2: {
                printmenu();
            }
                case 3: {
                sortmenu();
            }
            }
        }
    }


//
// Created by Kyler Belshaw on 9/25/25.
//