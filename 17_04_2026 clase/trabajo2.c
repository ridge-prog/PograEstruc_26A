#include <stdio.h>
#include <stdlib.h>

void capturar(int arreglo[],int n){
    int i;
    for (i=0;i<n;i++){
        scanf("%d", &arreglo[i]);
    }
}
void mostrar(int arreglo[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d ", arreglo[i]);
    }
}
int filtrar(int arreglo[], int arreglo2[],int n){
    int i;
    for (i=0;i<n;i++){
        if (arreglo[i]%2!=0){
            arreglo2[i]=arreglo[i];
        }
    }return 0;
}

int main()
{
    int n=6, i, longitud, longitud2;
    int arreglo[n], arreglo2[n];

    FILE *f;
    f= fopen("resultado.txt","w");

    printf("filtracion de numeros NO pares\n\n");
        longitud=sizeof(arreglo)/4;
    printf("introduce %d numeros enteros: ", longitud);
        capturar(arreglo, longitud);

    printf("\narreglo capturado: ");
        mostrar(arreglo, longitud);

    printf("\narreglo filtrado: ");
        filtrar(arreglo, arreglo2, longitud);
        longitud2=sizeof(arreglo2)/4;
        mostrar(arreglo2, longitud2);

    for (i=0;i<longitud2; i++){
        fprintf(f, "%d", arreglo2[i]);
    }
    fclose(f);

    return 0;
}
