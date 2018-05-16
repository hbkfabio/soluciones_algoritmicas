/*
 * Escribir un programa que calcule el máximo común divisor (MCD) de dos
 * enteros positivos.
 *
 * Solucion
 * para a y b, cuando:
 *  a=>b = (a-b,b)
 *  b=>b = (a,b-a)
 *  b=0 (a)
 *  a=0 (b)
 */


#include<stdio.h>

int
mcd(int a, int b){

    if(a==0){

        return b;

    }else if(b==0){

        return a;

    }else{
        if(a>=b){

        return mcd(a-b, b);
        }else{
            return mcd(a, b-a);
        }
    }
}


int
main(){


    int m = mcd(12,18);
    printf("El MCD es: %d", m);
    return 0;
}
