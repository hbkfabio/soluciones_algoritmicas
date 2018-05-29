#include <stdlib.h>
#include <stdio.h>

int imprime_datos(int b, int a){
  printf("datos: % d y % d", a, b);

  if (b<=1){
    imprimeDatos(b, b);
  }
  return b;
}

int main(void){

  imprime_datos(5,10);
  return 0;
}
