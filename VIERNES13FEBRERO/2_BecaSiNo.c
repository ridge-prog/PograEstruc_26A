#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prom, reprob;

    printf("\nPROMEDIO: ");
    scanf("%d", &prom);

    printf("\nMATERIAS REPROBADAS: ");
    scanf("%d", &reprob);

    if (prom>85&&reprob>=0){
        printf("Obtiene beca");
    }else{
        printf("No obtiene beca");
    }

    return 0;
}
