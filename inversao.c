#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>

int main() {
    char palavra[100];
    int inicio_inversao, fim_inversao;  // inicio e fim da inversao
    char palavra_temp;      // armazena temporariamente a palavra para inversao

    printf("Digite uma palavra para inverter: ");
    fgets(palavra, sizeof(palavra), stdin);

    // encontra o tamanho da palavra
    for (fim_inversao = 0; palavra[fim_inversao] != '\0'; fim_inversao++) {
        if (palavra[fim_inversao] == '\n') {
            palavra[fim_inversao] = '\0';
            break;
        }
    }

    // invertendo a palavra
    for (inicio_inversao = 0, fim_inversao = fim_inversao - 1; inicio_inversao < fim_inversao; inicio_inversao++, fim_inversao--) {
        palavra_temp = palavra[inicio_inversao];
        palavra[inicio_inversao] = palavra[fim_inversao];
        palavra[fim_inversao] = palavra_temp;
    }

    printf("\n");

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}
