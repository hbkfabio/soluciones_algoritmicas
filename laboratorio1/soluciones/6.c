/* Una persona se encuentra en el kilómetro 190 de la carretera 5 sur entre
 * Curicó y Talca, otra se encuentra en el km 250 de la misma carretera,
 * la primera viaja en dirección a Talca, mientras que la segunda se dirige a
 * Curicó, ambos en la misma velocidad. Realice un algoritmo para determinar
 * en qué kilometro de esa carretera se encontrarán.
*/
#include <stdio.h>
#include <stdlib.h>


//defino el tipo boolean
typedef int bool;
#define true 1
#define false 0


int
main(){

    int persona_1;
    int persona_2;
    bool activo;

    persona_1 = 190;
    persona_2 = 250;

    //inicializo activo
    activo = 1;

    while(activo){

        persona_1++;
        persona_2--;

        printf("La persona 1 va en el KM %d\n", persona_1);
        printf("La persona 2 va en el KM %d\n", persona_2);

        if(persona_1 == persona_2){

            printf("Se encontraron en el KM %d\n", persona_1);
            //desactivo el ciclo
            activo = 0;

        }

    }

    return 0;
}

