#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(void)
{
int seed_of_random_number_generator= time(NULL), random_number;
//https://cplusplus.com/reference/ctime/time/
printf("seed of random generator (time in seconds since 00:00 hours, jan 1,1970 UTC):");
printf("%d\n", seed_of_random_number_generator);

//https://cplusplus.com/reference/cstdlib/srand/
srand(seed_of_random_number_generator);
// this is initialization of random number generator
// one and the same seed leads to one ans the sequence of numbers

 random_number = rand();
//https://cplusplus.com/reference/cstdlib/rand/
printf("the random number is: %d\n",random_number);

if ( random_number % N == 0) // NB! operations are not executed simulteniously
{
printf("the number %d is multiple %d.\n", random_number,N);
}
else
{
printf("the number %d is not multiple %d.\n", random_number,N);
}


  return 0;
}
