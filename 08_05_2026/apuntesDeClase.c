TIPOS DEDATOS
int, char, float

OPERADORES
>
<
==
!
&

TERINARIO
int a,b,c;
c=a<b?100:0;
//si es verdadero c=100, si no es 0

ESTRUCTURAS DE CONTROL
Condicional: //if-else, switch
Ciclica//while, do while, for
Secuencial//pueden ser las condicionales tambien

ARREGLOS
//conjunto de datos del mismo tipo, unidimensionales, bidimensionales, tridimensionales
a[]<-(cantidad de elementos)
int a[23];
printf("%d", a[])//<-rango de [0...i-1]
int b[F][C]; //arreglos bidiomensionales filas por columnas

FUNCIONES
Procedimientos
La funcion returna algo y el procedimiento no.
Para hacer una funcion necesitam  os el tipo de dato que vamos a returnar.

#include <stdio.h>
#include <stdlib.h>
//cada funcion se le asigna un espacio en la memoria
//paso por copia o por valor
/*VENTAJAS: No afectas al programa main, se queda protegido, el valor original
de 'a' en el main nunca se va a cambiar.*/
/*DESVENTAJAS: Como esta protegido, no podemos distribuir el dato.*/
//paso por referencia utilizamos la direccion de memoria en el MAIN

/* //PASO POR VALOR
int f_doble(int a)
{
    if (a>0&&a<=100){
        a*=2;
        printf("%d\n", a);
    }else{
        printf("debe ser un No del 1 al 100.");
    }
    return a;
}

int main()
{
    int a;
    printf("dame un No de 1 al 100:");
    scanf("%d", &a);
    f_doble(a);
    return 0;
}
*/

/*    //PASO POR REFERENCIA
int f_doble(int a)
{
    a*=2;
    printf("Funcion: %d\n", a);
}

int f_triple(int *a)
{
    *a*=3;
    printf("Funcion: %d\n", *a);
}

int main()
{
    int a;

    printf("dame un NO de 1 al 100:");
    scanf("%d", &a);
    f_doble(a);
    printf("Main: %d\n", a);
    f_triple(&a);
    printf("Main: %d\n", a);

    return 0;
}
*/

/*
// int *p ESPECIFICAMENTE GUARDA DIRECION DE MEMORIA
//un puntero es un tipo de dato entero que guarda una direcc. de memoria.
//un apuntador es estrictamente un ENTERO.
int main()
{
    int x=5;
    int *p;
    p=&x;

    printf("%d\n", x);
    printf("%d\n", p);
    printf("%d\n", *p);
    return 0;
}
*/

/*
// se imprime hacia DONDE apunta *p
int main()
{
    int x=5;
    int *p=&x;
    printf("%d", *p);
}
*/
