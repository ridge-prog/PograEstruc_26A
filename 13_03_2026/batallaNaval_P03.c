#include <stdio.h>
#include <stdlib.h>

void matriz0(int filasy, int columnasx, int tab[filasy][columnasx]){
    int i, j;
    for (i = 0; i < filasy; i++){
        for (j = 0; j < columnasx; j++){
            tab[i][j] = 0;
        }
    }
}

void matriz(int filasy, int columnasx, int tab[filasy][columnasx]){
    int i, j;
    printf("\n");
    for (i = 0; i < filasy; i++){
        for (j = 0; j < columnasx; j++){
            printf("[%d]", tab[i][j]);
        }
        printf("\n");
    }
}

void estadisticas(int barcos, int totbarcos, int turno, int totturnos){
    printf("\nBARCOS ENCONTRADOS: %d/%d\n", barcos, totbarcos);
    printf("TURNO: %d/%d\n", turno, totturnos);
}

int main()
{
    int filasy = 5, columnasx = 5;
    int tab[filasy][columnasx];
    int tabreal[filasy][columnasx];
    int x, y;

    int barco=1,fallo=2,impacto=3, barcos=0, totbarcos=4, turnos=0, totturnos = 16;

    matriz0(filasy, columnasx, tab);
    matriz0(filasy, columnasx, tabreal);
    tabreal[3][1]=barco;
    tabreal[2][4]=barco;
    tabreal[1][1]=barco;
    tabreal[0][4]=barco;

    printf("///BATALLA NAVAL///\n");
    matriz(filasy, columnasx, tab);

    do{
        printf("que posicion deseas disparar?(1-5)\n");
        printf("fila y:");
        scanf("%d", &y);
        printf("columna x:");
        scanf("%d", &x);

        if (x<1||x>5||y<1||y>5){
            printf("\ndato invalido, ingresa un numero de (1-5)\n");
        }else{
            y--;
            x--;
        if (tab[y][x]==impacto||tab[y][x]==fallo){
            printf("\nya haz impactado este lugar\n");
        }else if (tabreal[y][x]==barco){
            printf("\nimpacto!\n");
            tab[y][x]=impacto;
            barcos++;
            turnos++;
        }else{
            printf("\nfallo\n");
            tab[y][x]=fallo;
            turnos++;
        }
        matriz(filasy, columnasx, tab);
        estadisticas(barcos, totbarcos, turnos, totturnos);
        }
    }while(turnos<totturnos&&barcos<totbarcos);

    printf("\nfin del juego\n");
    printf("tablero reveleado:");
    matriz(filasy, columnasx, tabreal);
    printf("tu tablero:");
    matriz(filasy, columnasx, tab);
    estadisticas(barcos, totbarcos, turnos, totturnos);

    if (barcos==totbarcos){
        printf("\nhaz ganado!\n");
    }else{
        printf("\nperdiste\n");
    }

    return 0;
}
