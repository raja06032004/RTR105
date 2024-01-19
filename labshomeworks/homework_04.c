#include <stdio.h>

// Function prototypes
long long calculateFactorial(int num);

int main() {
    // Get user input for decimal number
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Get user input for data type
    char dataType;
    printf("Choose data type (c for char, i for int, l for long long): ");
    scanf(" %c", &dataType);

    // Calculate and display factorial
    long long result = calculateFactorial(decimalNum);

    // Display the result based on the selected data type
    if (dataType == 'c') {
        printf("Factorial: %hhd\n", (char)result);
    } else if (dataType == 'i') {
    if (result <= ((unsigned int)-1) / 2) {
        printf("Factorial: %d\n", (int)result);
    } else {
        printf("Result exceeds the limits of int data type.\n");
    }
    } else if (dataType == 'l') {
        printf("Factorial: %lld\n", result);
    } else {
        printf("Invalid data type selected.\n");
    }

    return 0;
}

// Iterative function to calculate factorial
long long calculateFactorial(int num) {
    long long result = 1;

    while (num > 1) {
        result *= num;
        num--;
    }

    return result;
}
