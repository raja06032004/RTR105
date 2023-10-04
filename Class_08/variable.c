// let investigate data types and variables 

#include <stdio.h>
int main(void)
{
char c, test_symbol; // declartion of discrete variables
                     // this is just creation of correspondance
                     // variable name (or identification) VS
                     // some place and some amount of bytes in memory
printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#x\n", c);
// after declaration value of variable isn't known

// that is why it is better (but not obligatory) to use definition
char c_new = 85; // definition of distance variable
                 // is declaration + assigning of value 
                 // = assigning operation (right part value is written
                 // in memory place mentioned by the left part)
// there is some time (in microseconds or in nanoseconds etc.) between
// every action 
printf("value of c_new variable as symbol: %c\n", c_new);
printf("value of c_new variable as integer number (dec): %d\n", c_new);
printf("value of c_new variable as integer number (oct): %#o\n", c_new);
printf("value of c_new variable as integer number (hex): %#x\n", c_new);

// the role of variable is to be varied (changed)
// when we need we can assign new value!
c ='y';
printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c =0105;
printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c = 0x4B; //0x4b
printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c =85.6; // 0.6 data will be trancated
printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c = 1.256e2; // this notation with floating point
             // mens 1.253 * 10^(2) big real number -125.3
printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#x\n", c);

return 0;
}
