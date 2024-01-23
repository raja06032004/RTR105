#include <stdio.h>

long long calculateFactorial(int num) {
    long long result = 1;
    for (int I = 1; I <= num; ++I) {
        result *= I;
    }
    return result;
}

void printResult(long long result, long long input_num, char data_type) {
    printf("Factorial of Number %lld! = %lld (Using %c)\n", input_num, result, data_type);
}

int main() {
    long long input_num;
    char choice;

    printf("Please Enter Decimal Number: ");
    scanf("%lld", &input_num);

    printf("Please Enter first letter of Data type (c) (i) (l): ");
    scanf(" %c", &choice);

    long long result = 1;

    for (int I = 1; I <= input_num; ++I) {
        result *= I;

        if (result / I != result) {
            printf("Selected Data type is too large to store number %lld\n", input_num);
            return 1;  // Return an error code
        }
    }

    if (choice == 'c' || choice == 'i' || choice == 'l') {
        printResult(result, input_num, choice);
    } else {
        printf("Invalid choice. Please enter 'c', 'i', or 'l'.\n");
        return 1;  // Return an error code
    }

    return 0;  // Indicates successful execution
}
