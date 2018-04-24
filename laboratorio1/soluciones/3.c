/* La tienda “El harapiento distinguido” tiene una promoción:
 * a todos los trajes que tienen un precio superior a $25.000
 * se les aplicará un descuento de 15 %, a todos los demás se les aplicará
 * sólo 8 %.
 * Realice un algoritmo para determinar el precio final que debe pagar una
 * persona por comprar un traje y de cuánto es el descuento que obtendrá
 *  */

#include<stdio.h>
#include<stdlib.h>


int main(){

    int costo_traje;
    int descuento;
    int precio_final;

    printf("Ingrese el costo del traje: ");
    scanf("%d", &costo_traje);

    //determino el valor del traje si es mayor a 25mil
    if (costo_traje > 25000){
        //verdadero
        descuento = costo_traje * 0.15;

    }else{
        //falso
        descuento = costo_traje * 0.08;
    }

    //realizo operacion final
    precio_final = costo_traje - descuento;

    printf("El precio final del traje es: %d\n", precio_final);

    return 0;
}
