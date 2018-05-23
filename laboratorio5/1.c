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
#include<time.h>


typedef int bool;
#define true 1
#define false 0

void
apuesta(){

    /*  int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    */

    bool activo;
    char opcion_usuario;
    int opcion_a;
    int opcion_b;
    int ganada;
    int perdida;
    char termino;

    activo=true;
    ganada=0;
    perdida=0;

    while(activo){
        opcion_a=1+rand()% (9);
        opcion_b=1+rand()% (9);

        if (opcion_a!=opcion_b){
            printf("Apuestas por A o B: ");
            scanf(" %c", &opcion_usuario);
            printf("A saca un %d y ", opcion_a);
            printf("B saca un %d \n", opcion_b);

            if (opcion_usuario=='A' || opcion_usuario=='a' && opcion_a > opcion_b){
                printf("Haz Ganado\n");
                ganada++;
            }else if(opcion_usuario=='B' || opcion_usuario=='b' && opcion_a < opcion_b){
                printf("Haz Ganado\n");
                ganada++;
            }else{
                printf("Haz Perdido \n");
                perdida++;
            }

            printf("Llevas %d partida ganadas y ", ganada);
            printf("%d partida perdidas\n", perdida);

            printf("Desea Continuar presione S para continuar o ");
            printf("cualquier otra tecla para terminar\n");
            scanf(" %c", &termino);

            if (termino!='S' && termino!='s'){
                break;
            }
        }
    }
}

int
main(){
    srand(time(0));

    apuesta();
    return 0;
}
