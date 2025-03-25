#include <stdio.h>

int main() {
  printf("Hola mundo\n");
  
  int num = 21, *punt = &num;

  printf("\nContenido del puntero: %d", *punt);
  printf("\nContenido del puntero: %p", punt);
  printf("\nContenido del puntero: %p", &num);
  printf("\nContenido del puntero: %d", sizeof(num));

  return 0;
}