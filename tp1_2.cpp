#include <stdio.h>

int cuadrado(int num) {
  return num * num;
}

void cuadradoConPuntero(int *punt){
  *punt = *punt * *punt;
}

int main() {

  return 1;
}