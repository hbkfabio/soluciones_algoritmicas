/*
 *Escribir un programa que encuentre la suma de los enteros positivos pares
 * desde N hasta M. Chequear que si N es impar se imprima un mensaje de error.
 *
 */


#include<stdio.h>

int suma(int n, int m, int total){

    if (n%2==1){

        printf("Error\n");
        return 0;
    }

    if (n>m){
        //retorna la suma cuando n es mayor a m
        return total;

    }else{

        if (m%2==0){
            //sumo solo cuando son pares
            total=total+m;

        }
        //recursividad
        suma(n,m-1,total);
    }


}

void
ingreso_numeros(){

    int n;
    int m;
    int s;

    printf("Ingrese un numero par: ");
    scanf("%d", &n);

    printf("Ingrese otro numero: ");
    scanf("%d", &m);

    s = suma(n,m,0);
    if(s!=0){

        printf("La suma entre el rango de numeros %d y %d es: %d\n", n, m, s);

    }


}
int
main(){

    ingreso_numeros();

    return 0;
}
