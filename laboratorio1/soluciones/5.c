/*
 * Se requiere un algoritmo para obtener la estatura promedio de un grupo de
 * personas, cuyo número de miembros se desconoce, el ciclo debe efectuarse
 * siempre y en ingreso de estaturas se realizará mediante teclado y finalizará
 * con la tecla ’S’ o ’s’.Se requiere un algoritmo para obtener la estatura
 * promedio de un grupo de personas, cuyo número de miembros se desconoce, el
 * ciclo debe efectuarse siempre y en ingreso de estaturas se realizará
 * mediante teclado y finalizará con la tecla ’S’ o ’s’.
 */
#include <stdio.h>
#include <stdlib.h>

//defino el tipo boolean
typedef int bool;
#define true 1
#define false 0


int
main(){

    int i;
    float estatura;
    float suma_estatura;
    float promedio;
    bool activo;
    char tecla;

    //Activo variable activo como True
    activo = 1;
    //inicializo variable i que sera un contador
    i = 0;
    while(activo){

        printf("Ingrese la estatura del estudiante: ");
        scanf(" %f", &estatura);
        suma_estatura += estatura;
        i++;

        printf("Presione S si desea terminar "
                "o cualquier otra tecla para continuar: "
                );

        scanf("%c ", &tecla);
        //tecla = getchar();
        //getchar();
        while((tecla = getchar()) != '\n')
        if (tecla =='S' || tecla =='s'){

            activo = 0;

        }
    }

    //obtengo el promedio
    promedio = suma_estatura / i;
    printf("\n");
    printf("La estatura promedio de los estudiantes es: %f\n", promedio);

    return 0;
}
