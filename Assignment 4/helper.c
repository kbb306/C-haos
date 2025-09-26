#include <stdio.h>
#include <stdlib.h>
#include "helper.h"
#include <time.h>


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
    }
}

void fill_array_odd(int arr[], int size) {
    int *j = arr;
    for (int i = 0; i < size; i++) {
        *j = 2*i - 1;
        j ++;
    }
}

void fill_array_even(int arr[], int size) {
    int *j = arr;
    for (int i = 0; i < size; i++) {
        *j = 2*i;
        j++;
    }
}

void fill_array_random(int arr[], int size) {
    int *j = arr;
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        *j = rand() % 100;
        j++;
    }
}

//
// Created by Kyler Belshaw on 9/25/25.
//