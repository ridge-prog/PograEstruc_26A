#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    do{
        int N=0, suma=0, cal=0, i=0, prom = 0, validarN, validarcal;
        printf("CALCULO DE PROMEDIO\n");

        do{
            printf("Cuantas calificaciones se van a ingresar? Ingresa un numero: ");
            validarN = scanf("%d", &N);

            if (validarN!=1){
                printf("Dato invalido, ingresa un NUMERO.\n");
                scanf("%*s");
            }
            else if(N<=0){
                printf("Dato invalido, debe ser un numero mayor que 0.\n");
            }

        }while(N<=0||validarN!=1);

        for(i=1; i<=N; i++){
            printf("\nIngresa una calificacion: ");
            validarcal = scanf("%d", &cal);
            if (validarcal!=1){
                printf("Dato invalido, debe de ser un numero.\n");
                scanf("%*s");
                cal=0;
                i--;
            }else if (cal<0||cal>100){
                printf("Dato invalido, debe ser mayor que 0 y menor que 100.\n");
                i--;
                cal=0;
            }
            suma+=cal;
        }

        prom=suma/N;
        printf("\nSuma Total: %d\n", suma);
        printf("\nPromedio: %d", prom);

        printf("\n1. Repetir el programa\n");
        printf("2. Terminar el programa\n");
        scanf("%d", &opc);

    }while(opc!=2);

    return 0;
}
