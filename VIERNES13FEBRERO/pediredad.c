#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad, mayor = 18;

    printf("Introduzca su edad: \n");
    scanf("%d", &edad);

    if (edad>=mayor){
        printf("El usuario es mayor de edad.\n");}
    else{
        printf("El usuario es menor de edad.\n");}
    return 0;
}
