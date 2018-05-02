/*
 * Una empresa que fabrica termómetros necesita un algoritmo para mostrar una
 * temperatura en grados Celsius, utilizando un esquema similar al que usan los
 * termómetros de mercurio. Por ejemplo, una temperatura de 37 grados Celsius
 * deberı́a verse como:
 * 0          10         20          30          40           50
 * |          |          |           |           |            |
 * ------------------------------------------*-----------------
 */

#include <stdio.h>

int
toma_temperatura(){

    int temperatura=0;

    printf("Ingrese la temperatura a marcar: ");
    scanf("%d", &temperatura);

    return temperatura;

}


void
dibuja_termometro (){

    int temperatura;
    int contador;

    printf("Termometro\n\n");

    //llama a funcion que retorna valor de la temperatura a dibujar
    temperatura=toma_temperatura();

    for (int i=0;i<=50;i++){
        /* imprimo solo los valores divisibles por 10 */
		if ((i%10)==0){
			printf ("%d", i);
		}
		else{
			printf (".");
		}
	}
	printf ("\n");

    contador=0;
	for (int i=0; i<=50; i++){
        /* Todos los divisibles por 10 incluiran un pipe (|) */
		if ((i%10)==0 && contador==0){
			printf ("|");
            contador++;
		} else if((i%10==0) && contador>0){
            /* Por tener indices 10, 20, 30, 40 y 50, debo considerar que se
             * debe poner un caracter en blanco para cubrir los espacios de
             * las decenas 0 = 1 espacio; 10= 2 espacios
             */
            printf("| ");
        }
		else{
			printf (" ");
		}
	}
	printf("\n");

    contador=0;
    for (int i=0; i<=50; i++){
        if (i != temperatura){
            if ((i%10)==0 && contador>0){
             /* Por tener indices 10, 20, 30, 40 y 50, debo considerar que se
             * debe poner un caracter en blanco para cubrir los espacios de
             * las decenas 0 = 1 espacio; 10= 2 espacios
             */
                printf("--");
            }else{
                printf("-");
                contador++;
            }
        }else{
            printf("*");
        }
    }
    printf("\n");
}

int main (void){

    //llama al procedimiento dibuja termometro y pasa el parametro de entero
    //con valor 50
    dibuja_termometro(50);

    return 0;
}
