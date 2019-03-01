#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
  int my_data_s0[10];
  int i;
  srandom(time(NULL));

  // Fill data
  for (i = 0; i < 10; i++){
    my_data_s0[i] = random()%10;
  }

  // Print data
  for (i = 0; i < 10; i++){
    printf("data_s0[%d] : %d\n", i, my_data_s0[i]);
  }

  return 0;
}
