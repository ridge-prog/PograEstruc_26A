#include <stdio.h>
#include <stdlib.h>

/*
void mostrar1(int v[], int n){
    int i;
    for (i=0; i<3; i++)
    {
        printf("%d ", v);
    }
    printf("%d \n", n);
}*/

void mostrar(int v[3][3]){
    int i,j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", v[i][j]);
            }
        printf("\n");
        }
}

void capturar(int m[3][3]){
    int i, j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

int diagonal(int m[3][3]){
    int i, j, total;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (i==j){
                total+=m[i][j];
            }
        }
    }return total;
}

void guardarmatriz(int m[3][3], FILE *f){
    int i,j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            fprintf(f, "%d ", m[i][j]);
        }fprintf(f, "\n");
    }
}

void guardardiagonal(FILE *f, int diagonal){
    fprintf(f, "\nDiagonal = %d", diagonal);
}



int main()
{
    //int v[3];
    int m[3][3];
    //int n = 2;
    FILE *f;
    f = fopen("tablero.txt","w");

    capturar(m);
    mostrar(m);
    printf("Diagonal = %d", diagonal(m));
    guardarmatriz(m, f);
    guardardiagonal(f, diagonal(m));

    fclose(f);

    return 0;
}
