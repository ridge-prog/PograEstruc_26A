#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dummy, i, N=2;
    //Archivo de arreglos01
    float temp1, temp2;
    //Arreglos variable[1]
    float temp[N];

    temp[0]=20.5;
    temp[1]=19.2;

//Por cada brinco de datos, la direccion decrementa 4 bits
//TIPO FLOAT (4 BITS), ETIQUETA TEMP DIR, CARACTER [24]; BITS DE TIPO X CARACTER = 96
//se empieza desde 0?, temp[0]

    //ACTIVIDAD 1
    /*
    printf("Direccion de memoria de 2 flotantes:\n&temp1:%i,\n&temp2:%i\n", &temp1, &temp2);
    printf("Direccion de temp:%i\n", temp);
    printf("Direccion de &temp[%i]:%i\n", N,&temp[N]);
    printf("Direccion de &dummy:%i\n", &dummy);
    */

    //ACTIVIDAD 2
    /*
    printf("temp[1]:%f, &temp[1]%i\n", temp[1], &temp[1]);
    printf("temp[2]:%f, &temp[2]%i\n", temp[2], &temp[2]);
    */

    //ACTIVIDAD 3
    /*
    for(i=0; i<N; i++){
        printf("Temperatura %i: %i\n", i, &temp[i]);
    }
    */

    //ACTIVIDAD 4
//// For para LEER datos
    for(i=0; i<N; i++)
    {
        printf("Ingresa la temp %i:",i+1);
        scanf("%f", &temp[i]);
    }
//// For para IMPRIMIR datos
    for(i=0; i<N; i++)
    {
        printf("\n%.4f",temp[i]);
    }

    return 0;
}
