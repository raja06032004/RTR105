#include <stdio.h>

int main() {
    char letter1, letter2, letter3;
    char temp;

    // Ask the user to input three letters
    printf("Enter the first letter: ");
    scanf(" %c", &letter1);
    printf("Enter the second letter: ");
    scanf(" %c", &letter2);
    printf("Enter the third letter: ");
    scanf(" %c", &letter3);

    // Ask the user for the order of sequence
    char order;
    printf("Enter 'A' for alphabet order or 'D' for opposite order: ");
    scanf(" %c", &order);

    // Sort the letters based on user's choice
    if (order == 'A' || order == 'a') {
        if (letter1 > letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
        if (letter2 > letter3) {
            temp = letter2;
            letter2 = letter3;
            letter3 = temp;
        }
        if (letter1 > letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
    } else if (order == 'D' || order == 'd') {
        if (letter1 < letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
        if (letter2 < letter3) {
            temp = letter2;
            letter2 = letter3;
            letter3 = temp;
        }
        if (letter1 < letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
    } else {
        printf("Invalid input for order. Please enter 'A' or 'D'.");
        return 1;
    }

    // Output the sorted sequence
    printf("Sorted sequence based on your choice: %c%c%c\n", letter1, letter2, letter3);

    return 0;
}
