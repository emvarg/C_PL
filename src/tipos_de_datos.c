#include <stdio.h>

int main(){

  int variable;

  variable = 10;

  printf("-------- Labo de C -------- \n");

  printf("El contenido de la variable es: %d, está formada por %ld bytes \n", variable, sizeof(variable));

  return variable;
}
