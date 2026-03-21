#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int maxnombres=4, i;
    int numero[5];
    char nombres[maxnombres][20];//arreglo bidimensional de caracteres
    char NOMBRE[20];//arreglo unidimensional

    //ejemplo de carga e impresion
    /*
    for(i=0; i<5; i++){
        scanf("%d", &numero[i]);
    }
    for(i=0; i<5; i++){
        printf("%d", numero[i]);
    }
    */

    //lista de nombres
    for(i=0; i<maxnombres; i++){//escribir nombres
        strcpy(nombres[i], fgets(NOMBRE, sizeof(NOMBRE), stdin));
    }
    for(i=0; i<maxnombres; i++){//imprimir nombres
        printf("%d-[%d]:%s",i, &nombres[i],nombres[i]);
    }

/*

    //direcciones de memoria de arreglos
    for(i=0; i<5; i++){//imprimir direcciones de memoria NOMBRE
        printf("ARREGLO UNIDIMENSIONAL Direccion de memoria: %d\n", &NOMBRE[i]);
    }
    for(i=0; i<maxnombres; i++){//imprimir direcciones de memoria nombres
        printf("ARREGLO BIDIMENSIONAL Direccion de memoria: %d\n", &nombres[i]);
    }
*/


/*
    //datos basura?
    char ArregloC[5];
    int j, num=10;
    for (j=0; j<num; j++){
        printf("%d.%d\n",j,ArregloC[j]);
    }
    printf("%d\n",ArregloC);
*/
    return 0;
}
