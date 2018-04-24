/*
 * Escribir un programa en C para ser usado en las elecciones próximas
 * elecciones para presidente del centro de Alumno de la carrera de
 * Ingenierı́a Civil en Bioinformática. El programa listará y enumerará
 * tres candidatos para presidente, entonces deja emitir votos hasta
 * presionar la tecla F y entregará los resultados felicitando a quien
 * ganó. Para transparentar los resultados también se deben mostrar total
 * de votos efectuados, el número de votos obtenidos por cada candidato,
 * incluya votos nulos y en todo con su porcentaje.
*/

#include <stdio.h>
#include <stdlib.h>

/* Tip: Defino tipo booleano */
typedef int bool;
#define true 1
#define false 0

int main(){

    //definir todas las variables a utilizar
	int candidato_a=0;
	int candidato_b=0;
	int candidato_c=0;
	int nulo=0;
	int voto=0;
	float porciento;
	float total_votos=0;
	bool activo=1;

	printf ("Bienvenido a las elecciones de Bioinformática");

    //Se crea ciclo para evitar que el programa se cierre sin la instruccion
    //que corresponda (presionando cero)
	while (activo){

        //imprime menu con opciones
		printf("Opciones:\n");
		printf("1 - Roberto \n");
		printf("2 - Gabriel\n");
		printf("3 - Claudio\n");
		printf("\n");

        //muestra un contador de votos
		printf("Total de votos emitidos hasta el momento %0.f", total_votos);
		printf("\n");

        //solicita opcion al usuario para interaccion
		printf("Ingrese el numero de la opcion o presione 0 para salir: ");
		scanf("%d", &voto);

        //evalua opcion ingresa por el usuario
		switch (voto){

			case 0: activo=0;
			break;

			case 1 : candidato_a++;
			break;

			case 2: candidato_b++;
			break;

			case 3: candidato_c++;
			break;

			default: nulo++;
			break;
		}

        //en caso sea un volo valido, se incrementa el total_votos en 1
		if (voto != 0){
			printf("Gracias Su voto ha sido registrado\n");
			total_votos++;
		}

        //limpio la pantalla del usuario
		system("clear");
	}

    //evaluo resultados
    //solo se evalua cuando el total de votos es mayor a cero
	if (total_votos > 0){

		printf("\nEl resultado final es:\n");

		printf("El total de votos es: %0.f \n\n" , total_votos);

		printf("El resultado de los candidatos es el siguiente:\n");
		//candidatos
        //se calcula porcentaje del candidato A
		porciento = (candidato_a/total_votos)*100;
		printf("El candidato 1 obtuvo: %d de votos ", candidato_a);
        printf("representando un %.2f porciento \n", porciento);

        //se calcula porcentaje del candidato B
		porciento = (candidato_b/total_votos)*100;
		printf("El candidato 2 obtuvo: %d de votos ", candidato_b);
        printf("representando un %.2f porciento \n", porciento);

        //se calcula porcentaje del candidato C
		porciento = (candidato_c/total_votos)*100;
		printf("El candidato 3 obtuvo: %d de votos ", candidato_c);
        printf("representando un %.2f porciento\n", porciento);

        //se calcula porcentaje de votos nulos
		porciento = (nulo/total_votos)*100;
		printf("Los votos nulos fueron: %d \n", nulo);

		//deteminamos ganador en las siguientes opciones
        /*
         * Es ganador A cuando: es mayor a B y C
         * Es ganador B cuando: es mayor a A y C
         * Es ganador C cuando: es mayor a B y C
         * Los candidatos pueden empatar uno a uno cuando:
         * A y B son iguales y mayores a C
         * A y C son iguales y mayores a B
         * B y C son iguales y mayores a A
         * A, B y C son todos iguales (triple empate)
         */
		if((candidato_a > candidato_b) &&
                (candidato_a > candidato_c)){

			printf("El ganador es Candidato A");

		} else if ((candidato_b > candidato_a) &&
                (candidato_b > candidato_c)){

			printf("El ganador es Candidato B");

		} else if ((candidato_c > candidato_a) &&
                (candidato_c > candidato_b)){

			printf("El ganador es Candidato C");

		} else {

			printf("Existe empate ");
			if((candidato_a == candidato_b) &&
                    (candidato_a != candidato_c)){

				printf("Entre el candidato A y el candidato B");

			}else if((candidato_a == candidato_c) &&
                    (candidato_a != candidato_b)){

				printf("Entre el candidato A y el candidato C");

			}else if (((candidato_b == candidato_c) &&
                        (candidato_a != candidato_c)) ||
                    (candidato_a != candidato_b)){

				printf("Entre el candidato B y el candidato C");

			}else{

				printf("y un Triple empate");

			}

		}
	}
    printf("\n");
	return 0;
}
