#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char alumno1[16]="Antonio";
    char alumno2[16];
    int i,j, longitud;

    int n=5, m=16;
    char lista[n][m];
    
    for (i=0; i<n; i++){
        printf("Alumno %d:\n", i);
        fgets(alumno2, sizeof(alumno2), stdin);
        printf("\n");
        strcpy(lista[i], alumno2);

    }

    printf("Lista:\n");
    for (i=0; i<n; i++){
        printf("%s", lista[i]);
        longitud=strlen(lista[i]);
        printf("la longitud de %sEs %d\n", lista[i], longitud);
    }
    
    /*
    printf("alumno1:%s\n", alumno1);
    /*

    /*
    printf("scanf:");
    scanf("%s", alumno2);
    printf("alumno2 scanf:%s\n", alumno2);
    scanf("");
    */

    /*
    printf("alumno2 fgets:");
    fgets(alumno2, sizeof(alumno2), stdin);
    printf("alumno2 fgets:%s\n", alumno2);
    */
    
    return 0;
}
