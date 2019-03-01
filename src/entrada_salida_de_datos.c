#include <stdio.h>
#include <stdlib.h>

#define CONTADOR_POR_DEFECTO 2
#define DEFAULT_VAR_POINTER 10

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
    contador = CONTADOR_POR_DEFECTO;
  } else {
    contador = atoi(argv[1]);
  }

  for(i=0; i < contador; i++){
    printf("***********************\n");
    printf("Valor del contador :%d \n", i);
    printf("***********************\n");
  }

  printf("Valor del contador :%d \n", i);

  // Uso de variables de entorno
  char *var_pntr = getenv("MI_VARIABLE");

  int internal_variable = (var_pntr == NULL)? DEFAULT_VAR_POINTER : atoi(var_pntr);

  printf("Valor de variable de entorno: %d \n", internal_variable);


  return 0;
}
