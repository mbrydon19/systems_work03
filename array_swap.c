# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

  //initial array with 10 randomized int values
  int first_ray[10];
  srand( time(NULL) );
  for ( int i = 0; i < sizeof( first_ray) / 4; i++)
    first_ray[i] = rand();
  first_ray[9] = 0;
   for ( int i = 0; i < sizeof( first_ray) / 4; i++)
     printf( "initial array[%d] = %d \n", i, first_ray[i]);

   //second array with values from intial array, reversed
   int second_ray[10];
   int * first_rp = first_ray;
   int * second_rp = second_ray;
   for ( int i = 0; i <= 10; i++)
     *( second_ray + 9 - i) = *( first_ray + i);
   for ( int i = 0; i < sizeof( second_ray) / 4; i++)
     printf( "second array[%d] = %d \n", i, second_ray[i]);
   
   return 0;
}
