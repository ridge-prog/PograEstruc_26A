#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad, reprob;
    float prom;

    printf("Sistema de validacion Becas\n");

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    if (edad<18){
        printf("Se necesita ser mayor de edad.");
        return 0;
    }

    printf("\nIngresa tu promedio: ");
    scanf("%f", &prom);

    printf("\nMaterias reprobadas: ");
    scanf("%d", &reprob);

    if (prom>=90.00&&reprob<=0){
        printf("\nUsuario valido para Beca.\n");
    }else if (reprob>=2){
    printf("\nReinscripcion de Beca disponible.\n");
    }else if (reprob>=3){
        printf("\nUsuario en situacion critica.\n");
    }else{
        printf("\nUsuario no valido para beca.\n");
    }

    return 0;
}
