/*
 * Pepe salió a celebrar su santo con un grupo de amigos y decidieron ir a
 * comer a un restaurante. Ellos acostumbran pagar la cuenta por partes
 * iguales, es decir, cada uno paga lo mismo. Sin embargo, la
 * cuenta incluye el consumo de todos los comensales, y no considera el
 * IVA (19 %) ni la propina. Pepe y su grupo de amigos acostumbran dejar
 * un 10 % como propina. El problema es que no saben cuánto
 * deben pagar cada uno.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //defino las variables a utilizar
	int amigos;
	int valor_cuenta;

    //pregunto por los amigos y almaceno el valor en una variable
	printf("¿Cuantos amigos somos?\n");
	scanf("%d", &amigos);

    //establece el valor total de la cuenta
	printf("¿Cuanto es el valor de la cuenta?\n");
	scanf("%d", &valor_cuenta);
	printf("El valor total de la cuenta es %d: \n", valor_cuenta);

    //imprimo el valor de IVA
	printf("Valor del IVA es %.0f: \n", valor_cuenta * 0.19);
    //reutilizo la variable valor_cuenta y aumento el IVA
	valor_cuenta = valor_cuenta * 1.19;

    //imprimo el total de la propina
	printf("Valor con propina %.0f: \n", valor_cuenta * 0.10);
    //reutilizo la variable valor_cuenta que ya tiene el el IVA agregado
    //y aumento el porcentaje de la propina
	valor_cuenta = valor_cuenta * 1.10;

    //imprime el valor final incluyendo IVA + propina
	printf("El valor total de la cuenta es %d \n", valor_cuenta);

    //divido valor de la cuenta por el total de los amigos
    //y muestra en pantalla
	valor_cuenta = valor_cuenta/amigos;
	printf("El valor a pagar por cada uno de los amigos es: %d ", valor_cuenta);

	return 0;

}
