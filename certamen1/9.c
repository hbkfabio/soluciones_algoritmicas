/*
 * Muchos números naturales de base 10 consisten en múltiples números 1 y 0.
 * Por ejemplo el número once 11, el diez 10 el ciento uno 101. Dado un número
 * X se desea conocer cual es el múltiplo más pequeño de X que puede formarse
 * exclusivamente de unos y ceros.
 * Si X = 55 el múltiplo más pequeño que podemos formar con unos y ceros es 110.
 */



#include<stdio.h>


int
verificar(int numero){
/*
 * Funcion que permite encontrar a traves de mod 10 el digito 1 y 0
 * mas pequeño que puedo formar.
 */
    while(numero>0){
        /*
         * Si el resto es mayor a uno, no sirve
         */
        if(numero%10 > 1){
            return 0;
        }
        /*
         * Numero se va dividiendo por 10, hasta que sea cero, si cumple en que
         * el resto nunca sea mayor a uno, ese es el menor numero multiplo
         * en base 10 que se puede formar.
         */
        numero=numero/10;
    }

    return 1;

}

void
numeros(){


    int n;
    int m;
    int v;

    printf("Ingrese un numero: ");
    scanf("%d", &n);
    m=0;

    /*entro en un bucle hasta que encuentra el numero con digito 1 y 0 mas
    * pequeño
    */

    while(1){
        //siempre incrementa el multiplicador en uno
        m++;
        /*paso por parametro la multiplicacion del numero ingresado y m que se
         * incrementa siempre
         */
        v = verificar(n*m);
        /* hasta que verificar devuelva 1 */
        if(v == 1){
            printf("%d %d %d\n", n, m, n*m);
            break; //rompo ciclo while
        }
    }
}

int
main(){

    numeros();
    return 0;
}
