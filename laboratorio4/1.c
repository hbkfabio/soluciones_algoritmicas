/*Construya un algoritmo que permita invertir cualquier número entero ingresado
 * por pantalla. La solucion debe ser escrita en una función para un programa 
 * en C.
 *
 * Ejemplo:
 *     Entrada 123
 *     Salida: 321
 */


#include<stdio.h>
#include<stdlib.h>

void
invierte_numero(int numero){

    int resto;
    resto=0;

    int invertido;
    invertido=0;

    while(numero!=0){

        //obtengo el resto de una division por 10
        resto=numero%10;
        //divido el numero en 10 (disminuyo el digito en decenas)
        numero = numero/10;
        //incremento el numero en decenas
        invertido = invertido*10+resto;
    }
    //El numero invertido es un digito
    printf("El numero invertido es: %d\n", invertido);
}

void
ingreso_numero(){

    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    invierte_numero(numero);
}

int
main(){

    ingreso_numero();
    return 0;
}
