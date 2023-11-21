#include <stdio.h>

int main() {
    int num1, num2, num3;
    char order;

    // Taking input from the user
    printf("Enter the first decimal number: ");
    scanf("%d", &num1);
    printf("Enter the second decimal number: ");
    scanf("%d", &num2);
    printf("Enter the third decimal number: ");
    scanf("%d", &num3);

    // Asking for the order of sequence
    printf("Enter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &order);

    // Sorting the numbers based on user's choice
    if (order == 'a') {
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    } else if (order == 'd') {
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 < num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    } else {
        printf("Invalid input for order! Please enter 'a' or 'd'.\n");
        return 1;
    }

    // Outputting the sorted sequence
    printf("Sorted sequence based on your choice: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
