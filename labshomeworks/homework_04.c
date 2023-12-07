
#include <stdio.h>

void calculateFactorial(char dataType, double number)
  {
   char charResult = 1;
    int intResult = 1;
    long long longLongResult = 1;
    int i = 1;


    // Checking user's selected data type and calculating factorial accordingl
    switch (dataType) {
    case 'c':
    while (i <= number) {
         charResult *= i;
    if (charResult < 0) {
        printf("Factorial value exceeds range for char data type.\n");

         return;
                }
                i++;
            }

            printf("Factorial of %.0lf using char data type: %d\n", number, charResult);
            break;

        case 'i':
        while (i <= number) {
                intResult *= i;
        if (intResult < 0) {
            printf("Factorial value exceeds range for int data type.\n");

            return;
               }
                i++;

            }

            printf("Factorial of %.0lf using int data type: %d\n", number, intResult);
       break;

        case 'l':
        while (i <= number) {
               longLongResult *= i;

         if (longLongResult < 0) {
             printf("Factorial value exceeds range for long long data type.\n");
      return;
                }
                i++;
            }
            printf("Factorial of %.0lf using long long data type: %lld\n", number, longLongResult);
      break;
        default:
            printf("Invalid data type selected.\n");

    }

}



int main() {
    double userInput;
    char dataType;
    printf("Enter a decimal number: ");
    scanf("%lf", &userInput);
    printf("Select data type - char (c), int (i), or long long (l): ");
    scanf(" %c", &dataType);
    calculateFactorial(dataType, userInput);

    return 0;

}
