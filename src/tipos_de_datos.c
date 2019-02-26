#include <stdio.h>

int main(){

  int variable;
  char dato_caracter = 'C';
  unsigned int dato_uint = 2345234;
  float dato_float = 123.34;
  double dato_double = 123123123.23234;
  long double dato_long_double = 323423.43434;

  variable = 10;

  printf("-------- Labo de C -------- \n");

  printf("El contenido de la variable es: %d, está formada por %ld bytes \n", variable, sizeof(variable));
  printf("El contenido de la variable es: %d, está formada por %ld bytes \n", dato_caracter, sizeof(dato_caracter));
  printf("El contenido de la variable es: %d, está formada por %ld bytes \n", dato_uint, sizeof(dato_uint));
  printf("El contenido de la variable es: %d, está formada por %ld bytes \n", dato_float, sizeof(dato_float));
  printf("El contenido de la variable es: %d, está formada por %ld bytes \n", dato_double, sizeof(dato_double));
  printf("El contenido de la variable es: %d, está formada por %ld bytes \n", dato_long_double, sizeof(dato_long_long_double));

  return variable;
}
