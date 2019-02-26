#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int i;
  int contador;

  printf("El nombre del progrma es %s \n", argv[0]);

  for (i = 1; i < argc; i++){
    printf("Parámetro de entrada %d, es: %s \n",i, argv[i]);
  }

  // Impresion de líneas controlada por parámetros de entrada

  // Revision que evita que el usuario corra el programa sin
  // parámetros
  if (argv[1] == NULL){
    contador = 2;
  } else {
    contador = atoi(argv[1]);
  }

  for(i=0; i < contador; i++){
    printf("***********************\n");
    printf("Valor del contador :%d \n", i);
    printf("***********************\n");
  }

    printf("Valor del contador :%d \n", i);

  return 0;
}
