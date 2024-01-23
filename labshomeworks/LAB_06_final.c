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

int main() {
    int randomNumber, x, y, product;

    // Call the function without arguments and with return
    randomNumber = generateRandomNumber();
    printf("Random number generated: %d\n", randomNumber);

    // Call the function without arguments and without return
    greetUser();

    // Call the function with arguments and with return
    printf("Enter the x integer: ");
    scanf("%d", &x);
    printf("Enter the y integer: ");
    scanf("%d", &y);
    product = calculateProduct(x, y);
    printf("Product of %d and %d is: %d\n", x, y, product);

    // Call the function with arguments and without return
    printf("Enter the x integer: ");
    scanf("%d", &x);
    printf("Enter the y integer: ");
    scanf("%d", &y);
    printSum(x, y);

    return 0;
}
