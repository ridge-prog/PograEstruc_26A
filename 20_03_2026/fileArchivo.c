#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=5, i, j;
    char tablero[n][n];

//cargar matriz int
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            tablero[i][j]='~';
        }
    }

    tablero[1][2]='B';
    tablero[3][4]='X';
    tablero[2][1]='O';

//imprimir matriz int
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
    FILE *archivo;
    archivo = fopen("tablero.txt",'w');
    return 0;
}

/*
//cargar matriz int
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &tablero[i][j]);
        }
    }
//imprimir matriz int
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("[%d]", tablero[i][j]);
        }
        printf("\n");
    }
*/
