#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0, valor=0, suma=0;

    printf("Cuantas veces quieres sumar el dato\n");
    scanf("%d", &N);


    for (int i=1; i<=N; i++){
            printf("\nIngresa un nuevo dato:");
            scanf("%d", &valor);
            suma += valor;
    }
    printf("\nTOTAL: %d\n", suma);
    return 0;
}
