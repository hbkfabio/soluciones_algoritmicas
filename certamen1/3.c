#include <stdlib.h>
#include <stdio.h>
int main(){
  int a=4,b=3,mayor;

  while ((a<4) || (b<100)){
    if (a>b){
      mayor = a;
    }else{
      mayor = b;
    }else{
      mayor = 0;
    }

    a=a+mayor;
    b=b*mayor;
  }
  printf("%i % i", a,b);
}
