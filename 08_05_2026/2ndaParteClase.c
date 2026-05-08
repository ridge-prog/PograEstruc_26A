#include <stdio.h>
#include <stdlib.h>
/*Tipo de dato
int
char
struct Barco. Todo esto es un tipo de dato
*/

struct Barco
{
    char nombre[20];
    int peso;
    int tripulacion;
    int tam;
};


int f_baja(struct Barco *p)
{
    printf("%d\n", p->tripulacion);
    p->tripulacion=p->tripulacion-2;
    if(p->tripulacion==0)
        return 0;
    else
        f_baja(p);
}

//portotipado, funcion dentro de una funcion no se puede
int main()
{
    int aguacate;
    //struct Barco *totopo;
    struct Barco toto;
    struct Barco *p;
    /*
    aguacate=1;
    totopo->peso=1000;
    totopo->tripulacion=6;

    printf("%d\n",totopo);
    printf("%d\n",totopo->peso);
    */
    //totopo->tripulacion=6;
    toto.tripulacion=8;

    p=&toto;
    f_baja(p);
    //f_baja(totopo);
    return 0;
}
