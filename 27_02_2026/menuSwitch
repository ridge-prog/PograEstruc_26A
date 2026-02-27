#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc, opc2, x, y;
    printf("Menu de seleccion\n");

    printf("1.-Analizar Num\n");
    printf("2.-Calculadora\n");
    printf("3.-Salir\n");

    scanf("%d", &opc);

    switch(opc){
        case 1: //Analizar numero
            printf("Opcion seleccionada: Analizar Numero.\n");
            printf("Dame un numero entero: ");
            scanf("%d", &x);
            if (x%2==0){
                printf("Numero par.\n");
            }else{
                printf("Numero impar.\n");
            }
            break;

        case 2: //Calculadora
            printf("Opcion seleccionada: Calculadora.\n");

            printf("Dame dos numeros enteros:");
            scanf("%d \n %d", &x, &y);

            printf("El primer operando es: %d, El segundo es: %d", x, y);

            printf("\n1.Suma\n2.Resta\n");
            scanf("%d", &opc2);

            switch(opc2){
                case 1:
                    x+=y;
                    printf("Resultado: %d", x);
                    break;
                case 2:
                    x-=y;
                    printf("Resultado: %d", x);
                    break;
                default:
                    printf("////////Opcion NO VALIDA////////// \n");
                    break;
            }
            break;

        case 3: //Salir
            printf("////////Adios mundo!////////// \n");
            return 0;
            break;

        default:
            printf("////////Opcion NO VALIDA////////// \n");
            break;
    }
}
