#include <stdio.h>

int main() {
  printf("Hola mundo\n");
  
  int num = 21, *punt = &num;

  printf("\nContenido del puntero: %d", *punt);
  printf("\nDireccion de memoria en el puntero: %p", punt);
  printf("\nDireccion de memoria de la variable: %p", &num);
  printf("\nDireccion de memoria del puntero: %p", &punt);
  printf("\nTamanio de la memoria utilizada por la variable: %d", sizeof(num));

  return 0;
}