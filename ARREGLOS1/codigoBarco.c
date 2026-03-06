#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5 VERDE HACIA ABAJO, FILAS; 5 AZUL HACIA LOS LADOS, COLUMNAS?
    
    int I, J;
    int i, j, x[2], y[2], opc;
    int N = 3; //Define el tamaño de filas
    int M = 3; //Define el tamaño de columnas
    int Bote1=777, Bote2[2]={555,555}, b1, b2;
    //int tab[N][M];
    int j1[N][M], j2[N][M];

    j1[2][1]=Bote1;
    j1[0][0]=Bote2[0];
    j1[0][1]=Bote2[1];

    j2[0][1]=Bote1;
    j2[2][0]=Bote2[0];
    j2[2][1]=Bote2[1];

    do{
        printf("JUEGO DE BARCOS\n");
        printf("Que Jugador es?\n");
        printf("\n1.Jugador 1");
        printf("\n2.Jugador 2");
        printf("\n3.Salir\n");
        scanf("%d", opc);


        for (i=0; i<N; i++){
            for (j=0; j<M; j++){
                j1[i][j] = 0;
                j2[i][j] = 0;
                }
        }
        if (opc==1){
            for(){
                printf("En que fila esta tu barco %d:\n");
            }
            printf("En que fila esta tu barco 1(1 ESPACIOS):\n");
            printf("x:");
            scanf("%d", &x[0]);
            printf("En que columna esta tu barco 1(1 ESPACIOS):\n");
            printf("y:");
            scanf("%d", &y[0]);
            
            b1=
            
            printf("En que fila esta tu barco 2 (2 ESPACIOS):\n");
            printf("x:");
            scanf("%d", &x[0]);
            printf("x2:");
            scanf("%d", &x[0]);
            printf("En que columna esta tu barco 2:\n");
            printf("y:");
            scanf("%d", &y[0]);
            
            
        }else if (opc==2){
            printf("En que fila esta tu barco 1:\n");
            printf("x:");
            scanf("%d", &x[1]);
            printf("En que columna esta tu barco 1:\n");
            printf("y:");
            scanf("%d", &y[1]);
        }
        
    }while (opc != 3);


    /*
    tab[0][0]=100;
    tab[0][1]=101;
    tab[0][2]=102;

    tab[1][0]=110;
    tab[1][1]=111;
    tab[1][2]=112;

    tab[2][0]=120;
    tab[2][1]=121;
    tab[2][2]=122;

    printf("El dato 112 esta en [1][2]:%d\n", tab[1][2]);
    printf("El dato 121 esta en [2][1]:%d\n", tab[2][1]);
    */
    return 0;
}
