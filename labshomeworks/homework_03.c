#include <stdio.h>



void sortNumbers(int *a, int *b, int *c) {

    int *min, swap;



    // Sort using selection sort

    min = a;

    if (*b < *min) {

        min = b;

    }

    if (*c < *min) {

        min = c;

    }



    swap = *a;

    *a = *min;

    *min = swap;



    if (*b > *c) {

        swap = *b;

        *b = *c;

        *c = swap;

    }

}



int main() {

    int a, b, c;

    char order;



    printf("Enter the first number: ");

    scanf("%d", &a);

    printf("Enter the second number: ");

    scanf("%d", &b);

    printf("Enter the third number: ");

    scanf("%d", &c);

    printf("Enter A for ascending order or D for descending order:");

    scanf(" %c", &order);



    sortNumbers(&a, &b, &c);

    if (order == 'A' || order == 'a') {

        printf("The sorted sequence is: %d %d %d\n", a, b, c);

    } else if (order == 'D' || order == 'd') {

        printf("The sorted sequence is: %d %d %d\n", c, b, a);

    }



    return 0;

}

