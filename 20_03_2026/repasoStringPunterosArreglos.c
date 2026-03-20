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
    for(i=0; i<5; i++){
        scanf("%d", &numero[i]);
    }
    for(i=0; i<5; i++){
        printf("%d", numero[i]);
    }

    
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
    return 0;
*/

}

/*
FILE *archivo;
archivo = fopen("tablerotexto.txt", "w");
/*






/*
1980    h
1981    o
1982    l       } Arreglo.c es un puntador, va a imprimir el primer caracter?
1983    a           1980 []indice/offset/desplazamiento 1980+0=h 1980+1=o
1984    /0
*/

// buffer overflow exploit?

/*
N[2] N[1] 1972+1(4) INDICA
1972
1973
1974    16
1975

1976
1977
1978    23
1979
se multiplica por el tamaño del tipo de dato en bites
long - 8 bytes N
cada letra - 8 bits o 1 byte
*/
