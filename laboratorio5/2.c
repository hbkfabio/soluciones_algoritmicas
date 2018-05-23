/* Dado un número natural X, se calcula la raı́z digital de X número sumando
 * los dı́gitos que lo componen.
 * El proceso se repite sobre el nuevo número hasta que el resultado obtenido
 * tiene un sólo dı́gito. Este ultimo número es la raı́z digital del número X.
 * Ejemplo: 347 → 3 + 4 + 7 = 14 → 1 + 4 → 5 → Raizdigital(347) = 5
 *
 * SOLUCION:
 * Este ejercicios se ha propuesto dos soluciones, uno de forma recursiva:
 *  - Funcion raiz_digital
 * Y otro de forma iterativa usando dos funciones, una para sumar digitos y
 * otra la obtener la raiz digital
 */


#include<stdio.h>
#include<stdlib.h>


int
raiz_digital(int numero){

	if(numero<=9)
		return(numero);

	else
		return(raiz_digital((numero%10) + raiz_digital(numero/10)));
}



int suma_digitos(int numero)
/*Calcula y devuelve la suma de los digitos de un numero, de forma iterativa*/
{
	int suma=0;

	while(numero>0)
	{
		suma+=(numero%10);
		numero/=10;
	}

	return (suma);
}
int
raiz_digital_iterativa (int numero)
/*Calcula y devuelve la raiz digital de un numero, de forma iterativa*/
{
	while(numero>9)/*El numero tiene mas de una cifra*/
		numero=suma_digitos(numero);

	return(numero);
}
void
ingreso_numero(){

    int numero;
    int raiz;
    printf("Ingrese un numero para calcular su raiz digital: ");
    scanf("%d", &numero);
    raiz=raiz_digital(numero);
    printf("La suma de la raiz digital de forma recursiva es %d\n", raiz);

    raiz=raiz_digital_iterativa(numero);
    printf("La suma de la raiz digital de forma iterativa es: %d\n", raiz);
}

int
main(){

    ingreso_numero();

    return 0;
}
