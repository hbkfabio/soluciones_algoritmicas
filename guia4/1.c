/*Crear una función recursiva que cálcule el producto de dos números.
 *
 *Solucion:
 * La definicion de multiplicacion de dos numeros es:
 * una suma abreviada y la aplicacion de la propiedad asociativa,
 * o sea; para A y B,
 * cuando B>0:
 *      A = A+(A*(B-1));
 * cuando b es 0 (cero):
 *      A es 0 (cero).
 */

#include<stdio.h>

int multiplica(int a, int b){

    if (b==0){
        //retorna cero
        return 0;
    }else{
        //recursividad de la funcion
        return a+multiplica(a, b-1);
    }
}

void
ingreso_numeros(){

    int a;
    int b;
    int m;
    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese otro numero: ");
    scanf("%d", &b);

    m = multiplica(a, b);
    printf("El resultado de la multiplicacion es %d\n", m);

}


int
main(){

    ingreso_numeros();
    return 0;
}
