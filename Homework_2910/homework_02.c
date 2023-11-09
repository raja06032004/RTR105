#include<stdio.h>     
#include<stdint.h>     
#include<math.h>        
int main()       
{
printf("Enter a natural number: ");
  int a;      
  scanf("%u", &a);

  printf("Number: 0x%X\n", a);
  
  printf("%d", ((a & 0x80) >> 7));
  printf("%d", ((a & 0x40) >> 6));
  printf("%d", ((a & 0x20) >> 5));
  printf("%d", ((a & 0x10) >> 4));
  printf("%d", ((a & 0x08) >> 3));
  printf("%d", ((a & 0x04) >> 2));
  printf("%d", ((a & 0x02) >> 1));
  printf("%d", ((a & 0x01) >> 0));

  printf("\n");
  
  return 0;      
}      
