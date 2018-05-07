/*¡Alerta! Estalla una epidemia en Chile llamada “Solucionocucus Algoritmicus”.
 * Se ha extendido un virus por todo el territorio nacional y cualquier
 * ciudadano puede estar infectado. En cadena nacional el ministro de salud
 * hace la siguiente declaración:
 * “La epidemia afecta a uno de cada 100.000 Chilenos y tenemos un test, muy
 * rápido y barato, que tiene una fiabilidad del 99,99 %, ası́ que todos los
 * Chilenos deberán pasar este test y los que den positivo deberán vacunarse”.
 * O sea podemos entender que, el test indica solo un resultado “positivo” o
 * “negativo” si estás infectado de la epidemia. Un 99,99 % de los casos
 * acierta y un 0,01 % se equivoca (da como resultado lo contrario de la
 * realidad: a los infectados les da un “negativo” y viceversa). Entonces, una
 * persona que ha dado positivo en el test ¿qué probabilidad tiene de estar
 * infectada?
 * Nota: la respuesta es inferior al 50 %. El reto es entender cómo se puede
 * dar la paradoja de que, con un test fiable al 99,99 %, menos de la mitad de
 * los positivos lo sean realmente.
 * Solución:
    de 100000 de personas:
        - 99999 NO estarán infectadas.
        - 1 SÍ estarán infectadas.
    De las 99.999 no infectadas:
        - 99989 darán NEGATIVO.
        - 10 darán POSITIVO (erróneamente).
    De las 1 infectadas:
        - 9,9999 darán POSITIVO.
        - 0,0001 darán NEGATIVO (erróneamente).
    Por lo tanto, en 100000 personas, 10,999 darán positivo, pero realmente
    solo 0.9999 estarán infectados.
    Es decir, las probabilidades de estar realmente infectado si el test da
    positivo es de un 9,09%.
    (0.9999/10.9999)*100 = 9.09%
 */



#include <stdio.h>
#include <stdlib.h>



void
epidemia(){

    float total_chilenos;
    float infectados;
    float no_infectados;
    float acierto;
    float total_infectados;
    float porcentaje;

    //la epidemia afecta a 1 del total de personas
    total_chilenos=100000;
    infectados=1;
    total_infectados=0;

    printf("1\n");
    printf("De un total de %.0f de chilenos: \n", total_chilenos);
    printf("%.0f se encuentran infectados \n", infectados);

    /*
     * Un 99,99 % de los casos acierta y un 0,01 % se equivoca
     */
    printf("\n2\n");
    no_infectados=total_chilenos-infectados;
    printf("Por el margen de error ");
    printf("de los %.0f NO infectados\n", no_infectados);
    acierto=no_infectados*0.9999;
    infectados=no_infectados*0.0001;
    printf("%.0f realmente NO estan infectados\n", acierto);
    printf("%.0f SI estan infectados\n", infectados);
    total_infectados = total_infectados + infectados;

    /*
     * Del total de personas realmente infectadas, se equivoca tambien en un
     * 0,01%
     */
    infectados=1;
    printf("\n3\n");
    printf("De la persona infectada, por margen de error es:\n");
    acierto=infectados*0.9999;
    infectados=infectados*0.0001;

    total_infectados = total_infectados + acierto;

    printf("Dara POSITIVO %f\n", acierto);
    printf("Dara NEGATIVO %f (erroneo)\n", infectados);

    /*
     * El total de infectados es la suma de los infectados, mas el margen de
     * error de la lectura anterior.
     */
    printf("\n4\n");
    printf("Por lo tanto de %.0f personas ", total_chilenos);
    printf("%f marcaran como POSITIVO, ", total_infectados);
    printf("pero solo %f seran INFECTADOS REALES\n", acierto);

    /*
     * Se obtiene el porcentaje de probabilidad de los realmente infectados
     * versus los que probablemente estan infectados
     */
    printf("\n5\n");
    porcentaje=(acierto/total_infectados)*100;
    printf("Es decir, las probabilidades de estar realmente infectado, ");
    printf("es de un %f porciento\n",porcentaje );
}



int
main(){

    epidemia();
    return 0;
}
