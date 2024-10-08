#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    int indice = 13, soma = 0, k = 0;

    while (k < indice){
        k = k + 1;
        soma = soma + k;
    }

    printf("%i", soma);


    return 0;
}
