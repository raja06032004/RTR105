#include <stdio.h>

long long calculateFactorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

void printFactorial(long long result, long long input_num, char data_type) {
    printf("Factorial of Number %lld! = %lld (Using %c)\n", input_num, result, data_type);
}

int main() {
    long long input_num;
    char choice;

    printf("Please Enter Decimal Number: ");
    scanf("%lld", &input_num);

    printf("Please Enter first letter of Data type (c) (i) (l): ");
    scanf(" %c", &choice);

    if (choice == 'c' || choice == 'i' || choice == 'l') {
        long long result = calculateFactorial(input_num);
        printFactorial(result, input_num, choice);
    } else {
        printf("Invalid choice. Please enter 'c', 'i', or 'l'.\n");
        return 1;  
    }

    return 0; 
}
