#include <stdio.h>
#include "functions.h"

/*
int generateRandomNumber();
int calculateProduct(int a, int b) ;
void printSum(int a, int b);
void greetUser();
*/

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
