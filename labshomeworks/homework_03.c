#include <stdio.h>

int main() {
    int n1, n2, n3;
    char order;

    printf("Enter the first decimal number: ");
    scanf("%d", &n1);
    printf("Enter the second decimal number: ");
    scanf("%d", &n2);
    printf("Enter the third decimal number: ");
    scanf("%d", &n3);

    // Asking for the order of sequence
    printf("Enter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &order);

    if (order == 'a') {
        if (n1 > n2)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }

        if (n2 > n3)
        {
            int temp = n2;
            n2 = n3;
            n3 = temp;
        }
        if (n1 > n2)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
    }
      else if (order == 'd') {
        if (n1 < n2)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n2 < n3)
        {
            int temp = n2;
            n2 = n3;
            n3 = temp;
        }
        if (n1 < n2)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
    }
 else {
        printf("Invalid input for order! Please enter 'a' or 'd'.\n");
        return 1;
    }

    // Outputting the sorted sequence
    printf("Sorted sequence based on your choice: %d, %d, %d\n", n1, n2, n3);

    return 0;
}

