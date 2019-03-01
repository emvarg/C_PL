#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define I_DATOS_MAX 10 
#define J_DATOS_MAX 2
#define RANDOM_MAX 100

int main(int argc, char *argv[])
{
  int my_data_s0[I_DATOS_MAX];
  int my_data_s1[I_DATOS_MAX][J_DATOS_MAX];
  int i, j;
  srandom(time(NULL));

  // Fill 1D data
  for (i = 0; i < I_DATOS_MAX; i++){
    my_data_s0[i] = random()%RANDOM_MAX;
  }

  // Print 1D data
  for (i = 0; i < I_DATOS_MAX; i++){
    printf("data_s0[%d] : %d\n", i, my_data_s0[i]);
  }

  // Fill 2D data
  for (i = 0; i < I_DATOS_MAX; i++){
    for (j = 0; j < J_DATOS_MAX; j++){
    my_data_s1[i][j] = random()%RANDOM_MAX;
    }
  }

  // Print 2D data
  for (i = 0; i < I_DATOS_MAX; i++){
    for (j = 0; j < J_DATOS_MAX; j++){
    printf("data_s0[%d][%d] : %d\n", i, j, my_data_s1[i][j]);
    }
  }


  return 0;
}
