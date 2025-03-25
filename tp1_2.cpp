#include <stdio.h>

int cuadrado(int num) {
  return num * num;
}

void cuadradoConPuntero(int *punt){
  *punt = *punt * *punt;
}

void mostrarDireccionYContenido(int *punt){
  printf("\n\tDireccion de la variable: %p", punt);
  printf("\n\tContenido de la variable: %d", *punt);
}

void invertir(int *punt1, int *punt2){
  int aux = *punt2;

  *punt2 = *punt1;
  *punt1 = aux;
}

int main() {
  int num1, num2;
  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  printf("\n-- Elevar al cuadrado con funcion tipo int --");
  printf("\n\tCuadrado de %d = %d", num1, cuadrado(num1));
  printf("\n\tCuadrado de %d = %d", num2, cuadrado(num2));

  printf("\n\n-- Elevar al cuadrado con funcion tipo void --");
  cuadradoConPuntero(&num1);
  cuadradoConPuntero(&num2);
  printf("\n\tCuadrado de num1 = %d", num1);
  printf("\n\tCuadrado de num2 = %d", num2);

  printf("\n\n-- Numero 1 --");
  mostrarDireccionYContenido(&num1);

  printf("\n\n-- Numero 2 --");
  mostrarDireccionYContenido(&num2);

  printf("\n\n-- Invirtiendo variables --");
  invertir(&num1, &num2);

  printf("\n\n-- Numero 1 --");
  mostrarDireccionYContenido(&num1);

  printf("\n\n-- Numero 2 --");
  mostrarDireccionYContenido(&num2);


  return 1;
}