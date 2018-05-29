#include <stdio.h>
int funcion_uno(int x){
  x++;
  return x;
}

int funcion_dos(int x, int y){
  return x + y;
}

int main() {
  int x = 3, y = 6, a, b, c;
  a = funcion_uno(x);
  b = funcion_uno(y);
  c = funcion_dos(a,b);
  printf("%d , % d , % d\n", x, y, c);
  return 0;
}
