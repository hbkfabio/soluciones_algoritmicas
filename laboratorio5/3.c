/*
 * Escriba un programa que permita leer un número natural de 4 cifras, no todos
 * iguales. Implementa la función numero mayor, que calcula el mayor número que
 * se puede formar con las cifras del número ingresado, y la función
 * numero_menor() que calcule el menor número que se puede formar con las
 * cifras del número ingresado.
 *
 * Solucion:
 *  - Pasa por descomponer las cifras en digitos
 *  - Cada digito es enviado a una funcion (numero_mayor y numero_menor)
 *  - La funcion numero_mayor, recibe todos los digitos y determina uno a uno
 *  cual es el numero mayor
 *  - La funcion numero_menor, recibe todos los digitos y determina uno a uno
 *  cual es el numero menor a generar.
 */

#include <stdio.h>
#include <stdlib.h>

int
numero_menor(int n1,
            int n2,
            int n3,
            int n4,
            int menor){

    //Determino a traves de comparacion los numeros mediante digitos los menores
    if(n1 < n2 && n1 < n3 && n1 < n4){
            menor=menor*10+n1;
            //seteo a el mayor numero que se puede crear en digitos, en este
            //caso a dos digitos
            n1=10;
    }else{
        if(n2 < n1 && n2 < n3 && n2 < n4){
            menor=menor*10+n2;
             //seteo a el mayor numero que se puede crear en digitos, en este
            //caso a dos digitos
            n2=10;
        }else{
            if(n3 < n1 && n3 < n2 && n3 < n4){
                menor=menor*10+n3;
              //seteo a el mayor numero que se puede crear en digitos, en este
            //caso a dos digitos
               n3=10;
            }else{
                menor=menor*10+n4;
               //seteo a el mayor numero que se puede crear en digitos, en este
            //caso a dos digitos
              n4=10;
            }
        }
    }

    /*
     * Mientras todos los digitos no sean 10, sigue la recursividad
     */
    if(n1!=10 || n2!=10 || n3!=10 || n4!=10){
        //recursividad
        numero_menor(n1,n2,n3,n4,menor);
    }else{
        /* Si todos los digitos son diez, imprime numero resultante */
        printf("El numero menor que se puede formar es: %d\n", menor);
    }
}


int
numero_mayor(int n1,
            int n2,
            int n3,
            int n4,
            int mayor){


    //Determino a traves de comparacion los numeros mediante digitos los mayores
    if(n1 > n2 && n1 > n3 && n1 > n4){
            mayor=mayor*10+n1;
            //seteo a el menor numero que se puede crear en digitos
            n1=0;
    }else{
        if(n2 > n1 && n2 > n3 && n2 > n4){
            mayor=mayor*10+n2;
            //seteo a el menor numero que se puede crear en digitos
            n2=0;
        }else{
            if(n3 > n1 && n3 > n2 && n3 > n4){
                mayor=mayor*10+n3;
                //seteo a el menor numero que se puede crear en digitos
                n3=0;
            }else{
                mayor=mayor*10+n4;
                //seteo a el menor numero que se puede crear en digitos
                n4=0;
            }
        }
    }

    /*
     * Mientras todos los digitos no sean 0, sigue la recursividad
     */

    if(n1 !=0 || n2 !=0 || n3!=0 || n4!=0){
        //recursividad
        numero_mayor(n1,n2,n3,n4,mayor);
    }else{
        /* Si todos los digitos son cero, imprime numero resultante */
        printf("El numero mayor que se puede formar es: %d\n", mayor);
    }
}

void
numero_a_digitos(int numero){

    int n1;
    int n2;
    int n3;
    int n4;
/*
 * Se descompone el numero en digitos usando mod 10 y dividiendo por 10
 */
    n1 = numero%10;
    numero = numero/10;
    n2 = numero%10;
    numero = numero/10;
    n3 = numero%10;
    numero = numero/10;
    n4 = numero;

    numero_mayor(n1,n2,n3,n4,0);
    numero_menor(n1,n2,n3,n4,0);

}
void
ingreso_numero(){

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    numero_a_digitos(numero);
}

int
main(){

    ingreso_numero();

    return 0;
}
