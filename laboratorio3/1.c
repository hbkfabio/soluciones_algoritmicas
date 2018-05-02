/*
 *Una empresa tiene el registro de las horas que trabaja diariamente un
 * empleado durante la semana (seis dı́as) y requiere determinar el total de
 * éstas, ası́ como el sueldo que recibirá por las horas trabajadas. Cree las
 * funciones necesarias para realizar los calculos correspondientes y un
 *procedimiento para visualizar el sueldo del trabajador.
 */
#include<stdio.h>
#include<stdlib.h>


/*ejemplo de retorno de caracteres - Caso dias de la semana.
* Cuidado con la declaracion para la funcion esta es de tipo char.
* Pero se escribe de este modo, char* (lleva un asterisco delante)
* C no permite el retorno de valores desde una funcion de tipo caracter para
* una cadena si no lleva este asterisco (* representa un espacio en memoria).
*/
char*
dia_semana(int dia){

    switch(dia){

        case 1: return "lunes";
                break;
        case 2: return "martes";
                break;
        case 3: return "miercoles";
                break;
        case 4: return "jueves";
                break;
        case 5: return "viernes";
                break;
        case 6: return "sabado";
                break;
        case 7: return "domingo";
                break;
        default: return "Algo salio mal";
                 break;

    }

}


float
calculo_sueldo(int horas_trabajadas){

    float valor_hora;
    float sueldo;
    printf("Ingrese el valor por horas trabajadas: ");
    scanf("%f", &valor_hora);

    sueldo = valor_hora * horas_trabajadas;

    return sueldo;
}

void
calculo_horas(){

    int horas;
    int horas_trabajadas;
    float sueldo;
    char nombre_trabajador[20];
    //char dia[10];

    /*Ojo con el siguiente scanf, esta declaracion incluye que ademas acepte
     * los caracteres vacios o espacios hasta encontrar un salto de linea, esto
     * es gracias a el [^\n] antes de definir el tipo de dato aceptado, para
     * este caso c de char.
     */
    printf("Ingrese el nombre del trabajador: ");
    scanf("%[^\n]c", &nombre_trabajador);

    horas_trabajadas = 0;
    for (int i=0 ; i<6; i++ ){

        /* Esta es la forma de llamar a la funcion
         * se realiza lo que en programacion se denomina un CAST
         * que es la transformacion de un valor en un tipo de dato.
         * Para este caso, se retorna un espacio de memoria (entero)
         * y ese entero se convierte en cadena de caracteres.
         * HAGANLO ASI!
         */
        char *dia = dia_semana(i+1);
        printf("Ingrese el total de horas trabajadas para el dia %s: ",dia);

        scanf("%d", &horas);
        horas_trabajadas = horas_trabajadas + horas;
    }

    sueldo = calculo_sueldo(horas_trabajadas);
    system("clear");
    printf("El trabajador %s ", nombre_trabajador);
    printf("por un total de  %d horas_trabajadas ", horas_trabajadas);
    printf("recibe un sueldo de %0.f pesos chilenos", sueldo);
    printf("\n");

}


int
main(){

    calculo_horas();

    return 0;
}
