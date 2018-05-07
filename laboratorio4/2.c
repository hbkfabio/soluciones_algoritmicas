/* Para preparar el desayuno antes de una excursión 3 amigos deciden hacer
 * huevos revueltos. Resulta que Juan lleva 5 huevos, Manuel 3 y Antonio
 * ninguno. Hacen un total de 8 huevos resueltos y se reparten en partes
 * iguales. Acuerdan que, a cambio, Antonio les debe pagar 80 pesos.
 * ¿Cuánto de los 80 pesos tendrá que dar Antonio a Juan y cuánto a Manuel,
 * para que el trato sea justo para los tres?
 * Nota: la respuesta inmediata es dar 50 pesos a Juan y 30 a Manuel.
 * Pero eso no serı́a correcto. ¿Por qué?
 */


#include<stdio.h>
#include<stdlib.h>


int
solucion1(float juan,
        float manuel,
        float antonio){

    float comparte_huevos;
    float a_repartir;

    printf("Solucion1: Antonio divide todo el dinero entre Juan y Manuel\n");
    comparte_huevos=(juan+manuel)/3;

    /*Ahora el precio por cada huevo cambia;
     * vale el total de la division que come cada uno por el total de dinero
     */

    a_repartir=antonio/comparte_huevos;

    /*
     * Ahora juan comparte y obtiene el dinero que le corresponde
     */
    juan=(juan-comparte_huevos)*a_repartir;
    printf("Juan recibe: $%.0f de Antonio\n", juan);

    /*
     * Ahora manuel comparte y obtiene el dinero que le corresponde
     */
    manuel=(manuel-comparte_huevos)*a_repartir;
    printf("Manuel recibe: $%.0f de Antonio\n", manuel);

}

int
solucion2(float juan,
        float manuel,
        float antonio){

    float comparte_huevos;
    float a_pagar;

    printf("Solucion2: Solo paga lo que consume a Juan y Manuel\n");
    comparte_huevos=(juan+manuel)/3;

    /*Ahora el precio por cada huevo cambia;
     * vale el total de la division que come cada uno por el total de dinero
     */

    a_pagar=antonio/(juan+manuel);

    /*
     * Ahora juan comparte y obtiene el dinero que le corresponde
     */
    juan=(juan-comparte_huevos)*a_pagar;
    printf("Juan recibe: $%.0f de Antonio\n", juan);

    /*
     * Ahora manuel comparte y obtiene el dinero que le corresponde
     */
    manuel=(manuel-comparte_huevos)*a_pagar;
    printf("Manuel recibe: $%.0f de Antonio\n", manuel);

}

int
divide_huevos(){

    float juan=5;
    float manuel=3;
    float antonio=0;

    float total_huevos=0;
    float divide_huevos=0;
    //cuantos huevos para cada uno
    total_huevos = (juan+manuel+antonio)/3;
    //divide_huevos = total_huevos/3;

    printf("Juan comparte %f con Antonio \n", juan-total_huevos);
    printf("Manuel comparte %f con Antonio \n", manuel-total_huevos);

    //Antonio tiene 80 pesos
    antonio=80;
    solucion1(juan, manuel, antonio);
    solucion2(juan, manuel, antonio);

}


int
main(){

    divide_huevos();

    return 0;
}
