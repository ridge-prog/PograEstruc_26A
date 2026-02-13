#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Ingresa un numero: \n");
    scanf("%d", &num);

    i=num++;
    if (num%i!=0){
        printf("Numero primo.");}
    return 0;
}
