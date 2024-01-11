#include <stdio.h>

// Function prototypes
long long calculateFactorial(int num);

int main() {
    // Get user input for decimal number
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
  
    char dataType;
    printf("Choose data type (c for char, i for int, l for long long): ");
    scanf(" %c", &dataType);

    // Calculate and display factorial
    long long result = calculateFactorial(decimalNum);

    // Display the result based on the selected data type
    if (dataType == 'c') {
        printf("Factorial: %lld\n", (char)result);
    } else if (dataType == 'i') {
        printf("Factorial: %lld\n", (int)result);
    } else if (dataType == 'l') {
        printf("Factorial: %lld\n", result);
    } else {
        printf("Invalid data type selected.\n");
    }

    return 0;
}

// Recursive function to calculate factorial
long long calculateFactorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}
