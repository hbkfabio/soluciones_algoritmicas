/*
 *Implementar una función recursiva para calcular la potencia de un número ingresado por el usuario.
 */
#include<stdio.h>



int
potencia(int base, int exponente) {

    if(exponente==0) {

        return 1;

    }else{

        return base*potencia(base, exponente-1);

    }
}

void
ingreso_numero(){

    int a;
    int b;
    int p;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese un numero para ser exponente: ");
    scanf("%d", &b);

    p=potencia(a, b);

    printf("El resultado de %d elevado a %d es: %d \n", a, b, p);
}
int
main(){

    ingreso_numero();
    return 0;
}
