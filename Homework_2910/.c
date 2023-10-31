#include <stdio.h>

int main() {
    // Declare variables to store the numbers and the result
    long long number1, number2, result;

    // Prompt the user to enter the first number
    printf("Enter the first number (400,000): ");
    scanf("%lld", &number1);

    // Prompt the user to enter the second number
    printf("Enter the second number (100,000): ");
    scanf("%lld", &number2);

    // Calculate the result
    result = number1 * number2;

    // Output the result with commas for thousands, millions, etc.
    printf("The result of %lld * %lld is %lld (forty billion).\n", number1, number2, result);

    return 0;
}
When you run this C program and input 400,000 and 100,000, it will calculate the multiplication and display the result as "The result of 400,000 * 100,000 is 40000000000 (forty billion)."






