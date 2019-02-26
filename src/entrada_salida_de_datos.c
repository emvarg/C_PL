#include <stdio.h>

int main(int argc, char *argv[]){

  int i;
  int contador;

  printf("El nombre del progrma es %s \n", argv[0]);

  for (i = 0; i < argc; i++){
    printf("Parámetro de entrada %d, es: %s \n",i, argv[i]);
  }

  return 0;
}
