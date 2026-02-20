#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int suma=0;
    printf("INGRESA 0 PARA DETENER EL PROGRAMA.\n");
    printf("ingresa un dato\n");
    scanf("%d", &x);

    while (x != 0) {
        suma += x;
        printf("\ntotal: %d x: %d\n", suma, x);
        printf("\ningresa otro numero para sumarle\n");
        scanf("%d", &x);
    }
    printf("\nTOTAL:%d", suma);
    return 0;
}
