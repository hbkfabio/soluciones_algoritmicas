/*
 * Invertir un numero ingresado por pantalla a través de una función recursiva.
 */

#include<stdio.h>



int
invierte_numero(int a, int b){

    int invertido;

    if(a==0){

        invertido=b;

    }else{

        //divide el numero por decenas
        a=a/10;
        //multiplica el numero por decenas y se suma el resto
        b=b*10+a%10;
        //recursividad
        invertido=invierte_numero(a, b);

    }

    return invertido;
}


void
ingreso_numero(){

    int numero;
    int n;
    int b;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    b=invierte_numero(numero, 0);
    printf("El numero invertido para %d es: %d\n", numero, b);

}
int
main(){

    ingreso_numero();
    return 0;
}
