#include <stdio.h>

int main() {
    char num;
    
    // Prompt the user to enter a natural number
    printf("Enter a natural number: ");
    scanf("%hhd", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("Binary representation of %d: ", num);

    // Size of char in bits (usually 8)
    int bits = sizeof(char) * 8;

    // Use bitwise shift and mask to print the binary representation
    for (int i = bits - 1; i >= 0; i--) {
        char bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");

    return 0;
}
