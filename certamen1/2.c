#include <stdlib.h>
#include <stdio.h>
int main(void) {
  int a = 10, b;
  while(a > 0) {
    b = a - 1;
    printf("%i ", b);
    a = a - 1;
  }
  return 0;
}
