#include <stdio.h>

int main()
{
    int n, i, n1;
    long long int f;

    printf("Enter a Number to Find Factorial: ");
    scanf("%d", &n);

    printf("Data types you can use \n[char=>Press(1)]\n[int=>Press(2)]\n[long long int=>Press(3)]\n ");
    printf("Enter data type need to use = ");
    scanf("%d", &n1);

    f = i = 1;

    while (i <= n)
    {
        f *= i;
        i++;
    }

    switch (n1)
    {
        case 1:
        if (f < 100)
            printf("The Factorial of %d is : %lld", n, f);
        else
            printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
        break;

        case 2:
        if (n < 15)
            printf("The Factorial of %d is : %lld", n, f);
        else
            printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
        break;

        case 3:
        printf("The Factorial of %d is : %lld", n, f);
        break;

    default:
        printf("Invalid choice for data type.\n");
        break;
    }

    return 0;
}
