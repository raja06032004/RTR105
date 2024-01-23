#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function without arguments and with return
int generateRandomNumber() {
    srand(time(NULL));
    return rand() % 100; // Returns a random number between 0 and 99
}

// Function with arguments and with return
int calculateProduct(int a, int b) {
    return a * b; 
}

// Function with arguments and without return
void printSum(int a, int b) {
    printf("Sum of %d and %d is: %d\n", a, b, a + b);
}

// Function without arguments and without return
void greetUser() {
    printf("Hello! I AM RAJA\n");
}
