#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int maxnombres=1, maxchar=20, n=5, i, j, k;
    char tablero[n][n];
    char nombres[maxnombres][maxchar];//arreglo bidimensional de caracteres
    char NOMBRE[maxchar];//arreglo unidimensional

    FILE *archivo;
    archivo = fopen("tablero.txt","w");

    for(i=0; i<n; i++){//cargar matriz int
        for(j=0; j<n; j++){
            tablero[i][j]='~';
        }
    }

    tablero[1][2]='B';
    tablero[3][4]='X';
    tablero[2][1]='O';

    for(i=0; i<n; i++){//imprimir matriz int
        for(j=0; j<n; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<maxnombres; i++){//escribir nombres
        fgets(NOMBRE, sizeof(NOMBRE), stdin);
        for (j=0; NOMBRE[j]!='\0'; j++){
            if (NOMBRE[j]=='\n'){
                NOMBRE[j]=0;
                break;
            }
        }
        strcpy(nombres[i], NOMBRE);
    }

    for(i=0; i<maxnombres; i++){//imprimir nombres
        fprintf(archivo, "%s ", nombres[i]);
    }
    fprintf(archivo,"ren\n\n");

    for(i=0; i<n; i++){//imprimir matriz
        for(j=0; j<n; j++){
            fprintf(archivo, "%c ", tablero[i][j]);
            }
        fprintf(archivo, "\n");
    }

    fclose(archivo); //cierre de archivo
    archivo = fopen("tablero.txt","r");
    char a[20];

    while (fscanf(archivo, "%s",a) == 1){ //que lo lea sin importar en que linea se encuentre
        if (strcmp(a, nombres[0])==0){
            printf("Palabra encontrada en el .txt: %s, \nPalabra que se ingreso en la consola: %s\n", a, nombres[0]);
        }
    }
    fclose(archivo);
    return 0;
}





    /*
    fprintf(archivo,"\nRene Obed Lopez\n");
    for(i=0; i<maxnombres; i++){//imprimir nombres
        fprintf(archivo, "%s", nombres[i]);
    }*/


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
