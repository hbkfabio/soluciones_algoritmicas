/*
 * La asociación de vinicultores tiene como polı́tica fijar un precio inicial al
 * kilo de uva, la cual se clasifica en tipos A y B, y además en tamaños 1 y 2.
 * Cuando se realiza la venta del producto, ésta es de un solo tipo y tamaño,
 * se requiere determinar cuánto recibirá un productor por la uva que entrega
 * en un embarque, considerando lo siguiente: si es de tipo A, se le cargan $20
 * al precio inicial cuando es de tamaño 1; y $30 si es de tamaño 2. Si es de
 * tipo B, se rebajan $30 cuando es de tamaño 1 y $50 cuando es de tamaño 2.
 */

#include <stdlib.h>
#include <stdio.h>


typedef int bool;
#define true 1
#define false 0


int
main(){

    int precio_kilo_uva;
    int kilos_de_uva;
    int precio_final;
    char tipo_uva;
    char tamanio_uva;

    //variable booleana para romper ciclos de correctos
    bool correcto=1;

    precio_kilo_uva = 1000;

    printf("El precio por kilo de UVA es %d\n", precio_kilo_uva);

    printf("Ingrese la cantidad de Kilos de UVA: ");
    scanf("%d", &kilos_de_uva);

    //Solo permito que se ingresen valores A y B
    while (correcto){

        printf("Ingrese el tipo de la UVA A o B: ");
        scanf(" %c", &tipo_uva);

        if (tipo_uva == 'A' || tipo_uva == 'B'){

            correcto = 0;
        }
    }

    //reinicio valor de correcto
    correcto=1;
    //Solo permito que se ingresen valores 1 y 2
    while (correcto){

       printf("Ingrese el tamanio de la UVA: 1 o 2: ");
       scanf(" %c", &tamanio_uva);

       if (tamanio_uva == '1' || tamanio_uva == '2'){

           correcto = 0;
       }
    }

    /* Calculo segun tipo de UVA
     * TIPO  | tamanio | precio
     *   A   |    1    | + 20
     *   A   |    2    | + 30
     *   B   |    1    | - 30
     *   B   |    1    | - 50
     */
    //Se verifica el tipo de UVA
    if(tipo_uva == 'A'){

        //se verifica el tamanio de la uva
        if (tamanio_uva == '1'){

            precio_kilo_uva = precio_kilo_uva + 20;

        }else{
            //es de tamanio 2
            precio_kilo_uva = precio_kilo_uva + 30;

        }

    }else{

        //Es de tipo B
        if (tamanio_uva == '1'){

            precio_kilo_uva = precio_kilo_uva - 30;

        }else{
            //es de tamanio 2
            precio_kilo_uva = precio_kilo_uva - 50;
        }
    }

    printf("El precio por kilo de UVA es: %d\n", precio_kilo_uva );
    precio_final = precio_kilo_uva * kilos_de_uva;
    printf("El precio final es: %d\n", precio_final);

    return 0;

}
