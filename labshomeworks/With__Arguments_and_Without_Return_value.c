#include <stdio.h>



// Function with arguments and without return

void printSum(int a, int b) {

    printf("Sum of %d and %d is: %d\n", a, b, a + b);

}



int main() {

    int x, y;



    printf("Enter the x integer: ");

    scanf("%d", &x);



    printf("Enter the y integer: ");

    scanf("%d", &y);



    // Call the function with arguments and without return

    printSum(x, y);

    return 0;

}
