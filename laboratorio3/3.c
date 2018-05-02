/* Una persona adquirió un producto para pagar en 20 meses. El primer mes pago
 * $10, el segundo $20, el tercero $40 y ası́ sucesivamente. Realice un
 * algoritmo para determinar cuánto debe pagar mensualmente y el total de lo
 * que pagó después de los 20 meses. Cree una función dentro de una
 * recursividad para generar los cálculos y un procedimiento para mostrar el
 * resultado. */


#include <stdio.h>

int
calculo_cuenta(int cuota, int i){

    cuota = cuota*2;
    printf ("La cuenta para el mes %d es de: $%d\n", i, cuota);

	return cuota;
}


void
operacion(){

    int cuota;
    int total;

    cuota=10;
    total=0;

    //lamado recursivo a funcion hasta mes 20
    for(int i=0; i<=20; i++){
        //Cero es primer digito ! TOC
        if(i!=0){
            cuota=calculo_cuenta(cuota, i);
            total+=cuota;
        }
    }

    printf("\n");
	printf ("La cuenta total que debe cancelar el cliente es de: $%d", total);
    printf("\n");
}

int
main (void){

    operacion();
    return 0;
}

