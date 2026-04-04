#include <stdio.h>


int test(int anio);


int esMuyGrande(int anio);

int esNegativo(int anio);

int esBisiesto(int anio);

int main() {

    int anio = 0;

    printf("Ingrese un año:\n");

    //si es char o string -> error
    if ( scanf("%d", &anio) != 1 ){
        printf("Es necesario ingresar un numero");
        return 1;
    }

    if( test(anio) == 0 ){
        printf("------------>>>> salio todo bien\n");
    }
    else{
        printf("------------>>>> ocurrio un error\n");
    }
    return 0;
}

int test(int anio){

    if( esMuyGrande(anio)!= 0) return 1;

    if( esNegativo(anio) != 0) return 1;

    if( esBisiesto(anio) != 0) return 1;

    return 0;
}

int esMuyGrande(int anio){

    if (anio > 10000){
        printf("el año recibido es muy grande\n");
        return 1;
    }
    return 0;
}

int esNegativo(int anio){

    if ( anio < 1){

        printf("el año recibido es negativo\n");
        return 1;
    }

    return 0;
}

int esBisiesto( int anio){

    printf("1 es verdadero?: %d\n", (anio%4==0));
    printf("2 es verdadero?: %d\n", (anio%100!=0));
    printf("3 es verdadero?: %d\n", (anio%400==0));

            //1              //2                  //3
    if ( (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0  ){

        printf("el año recibido es bisiesto\n");
        return 0; //4
    }

    printf("el año recibido no es bisiesto\n");
    return 1;//5
}
