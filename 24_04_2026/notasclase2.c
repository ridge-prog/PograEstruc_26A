/*Nombre
Calificacion
Actividad Realizada*/

#include <stdio.h>
#include <stdlib.h>

//un struct permite agrupar varios datos de distinto tipo bajo un mismo nombre

struct alumne
{
    char nombre[30]; //20 bytes
    float calificacion; //4 bytes
    int actRealizada, derecho, edad; //4 bytes, 4 bytes
};    //total 32 bytes
    //struct Alumne{}


/*
main(){
    struct alumne al1;

    printf("Nombre: ");
    fgets(al1.nombre,30,stdin);

    printf("Edad: ");
    scanf("%d", &al1.edad);

    printf("Calificacion: ");
    scanf("%f", &al1.calificacion);

    printf("Actividades Realizadas: ");
    scanf("%d", &al1.actRealizada);


    printf("\nDatos Capturados:\n");
    printf("Nombre: %s", al1.nombre);
    printf("Calificacion: %.2f\n", al1.calificacion);
    printf("Edad: %d\n", al1.edad);
    printf("Actividades Realizadas: %d\n", al1.actRealizada);

    return 0;
}*/




int main(){
    int i, n=1;
    struct alumne grupo[n];
    for(i=0; i<n; i++){
        printf("Nombre: ");
        fgets(grupo[i].nombre,30,stdin);

        printf("Edad: ");
        scanf("%d", &grupo[i].edad);

        printf("Calificacion: ");
        scanf("%f", &grupo[i].calificacion);

        printf("Actividades Realizadas: ");
        scanf("%d", &grupo[i].actRealizada);
        getchar();
    }
    for(i=0; i<n; i++){
        printf("\nRESULTADOS:\n");
        printf("Nombre: %s", grupo[i].nombre);
        printf("Edad: %d\n", grupo[i].edad);
        printf("Calificacion: %.2f\n", grupo[i].calificacion);
        printf("Act. Realizadas: %d\n", grupo[i].actRealizada);
    }
    return 0;
}



/*
union Dato{
    int entero;
    float decimal;
};

int main(){
    union Dato x;

    x.entero=10;
    printf("%d\n", x.entero);
    return 0;
}
*/
