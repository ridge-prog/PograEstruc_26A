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

/*
correcion de codigo

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Ingresa un numero: \n");
    scanf("%d", &num);

    if (num<=1){
        return 0;}
    
    if (num%2!=0||num%3!=0){
        printf("Numero primo.");}
    return 0;
}
*/
