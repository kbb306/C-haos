#include <stdio.h>
#include <stdlib.h>
#include "helper.h"
#include <time.h>
int i = 0;

void print_array(int arr[], int size) {
    int *j = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *j);
        j++;
    }
}

void fill_array_odd(int arr[], int size) {
    int *j = arr;
    for (i = 1; i < size; i++) {
        *j = 2 * i - 1;
        j ++;
    }
}

void fill_array_even(int arr[], int size) {
    int *j = arr;
    for (i = 2; i < size; i++) {
        *j = 2 * i;
        j++;
    }
}

void fill_array_random(int arr[], int size) {
    int *j = arr;
    for (i = 0; i < size; i++) {
        srand((unsigned int)time(NULL));
        *j = rand() % 1001;
        j++;
    }
}

void sort_array_ascend(int arr[], int size) {
    for (i = 0; i < size - 1; i++) {
        int *var1 = arr;
        int *var2 = var1++;
        printf("var1 = %p, var2 = %p\n", var1, var2);
        int temp = 0;
        for (int j = i + 1; j < size; j++) {
            if (*var1 > *var2) {
                temp = *var1;
                *var1 = *var2;
                *var2 = temp;
            }
            var1++;
            var2++;


        }
    }
}

void sort_array_descend(int arr[], int size) {
    for (i = 0; i < size - 1; i++) {
        int *var1 = arr;
        int *var2 = var1++;
        printf("var1 = %p, var2 = %p\n", var1, var2);
        int temp = 0;
        for (int j = i + 1; j > size; j++) {
            if (*var1 > *var2) {
                temp = *var1;
                *var1 = *var2;
                *var2 = temp;
            }
            var1++;
            var2++;
        }
    }
}
void cancel(int arr[], int size) {
    printf("Goodbye");
}

//
// Created by Kyler Belshaw on 9/25/25.
//