#include<stdio.h>
#include<stdint.h>  
#include<math.h>
int main()       
{
char a;
printf("Enter a natural number: ");      
scanf("%hhd", &a);
printf("Number: 0x%X\n", a);
printf("%hhd", ((a>>7) & 0x01) );
printf("%hhd", ((a>>6) & 0x01) );
printf("%hhd", ((a>>5) & 0x01) );
printf("%hhd", ((a>>4) & 0x01) );
printf("%hhd", ((a>>3) & 0x01) );
printf("%hhd", ((a>>2) & 0x01) );
printf("%hhd", ((a>>1) & 0x01) );
printf("%hhd", ((a>>0) & 0x01) );
printf("\n");
  return 0;      
}    
