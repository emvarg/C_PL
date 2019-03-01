#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define I_DATOS_MAX 10 
#define J_DATOS_MAX 2
#define RANDOM_MAX 100

void fill_1d(int data_1d[I_DATOS_MAX]);
void fill_2d(int data_2d[I_DATOS_MAX][J_DATOS_MAX]);

// M A I N   F U N C T I O N
int main(int argc, char *argv[])
{
  int my_data_s0[I_DATOS_MAX];
  int my_data_s1[I_DATOS_MAX][J_DATOS_MAX];
  srandom(time(NULL));

  // Call 1D subrutine
  fill_1d(my_data_s0);

  // Call 2D subrutine
  fill_2d(my_data_s1);

  return 0;
}

// H E L P E R   F U N C T I O N S

void fill_1d(int data_1d[I_DATOS_MAX])
{
  int i;

  // Fill 1D data
  for (i = 0; i < I_DATOS_MAX; i++){
    data_1d[i] = random()%RANDOM_MAX;
  }

  // Print 1D data
  for (i = 0; i < I_DATOS_MAX; i++){
    printf("data_s0[%d] : %d\n", i, data_1d[i]);
  }
}

void fill_2d(int data_2d[I_DATOS_MAX][J_DATOS_MAX])
{
  int i, j;

  // Fill 2D data
  for (i = 0; i < I_DATOS_MAX; i++){
    for (j = 0; j < J_DATOS_MAX; j++){
    data_2d[i][j] = random()%RANDOM_MAX;
    }
  }

  // Print 2D data
  for (i = 0; i < I_DATOS_MAX; i++){
    for (j = 0; j < J_DATOS_MAX; j++){
    printf("data_s0[%d][%d] : %d\n", i, j, data_2d[i][j]);
    }
  }

}
