#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>

int main()
{
    int contador, resultado, numero_dig, fib1, fib2, escolha_user, resposta;

    setlocale(LC_ALL, "Portuguese");

    do{

    resultado = 0;
    contador = 1;
    fib1 = 0;
    fib2 = 1;

    printf("Vamos calcular a sequência Fibonacci: \n\n");
    printf("Deseja usar um número pré-definido ou digitar um número? \n\n");
    printf("1 - Usar número definido \n");
    printf("2 - Digitar um número \n");
    scanf("%i", &escolha_user);
    system("cls");

    switch (escolha_user){

        case 1:
            numero_dig = 25;
            printf("\n");
            printf("Calculando...");
            Sleep(1500);
            printf("\n");

            while (contador != numero_dig){
            resultado = fib1 + fib2;

            fib1 = fib2;
            fib2 = resultado;
            contador ++;



            }
            break;

        case 2:

            printf("Digite um número para calcular a sequência Fibonacci: ");
            scanf("%i", &numero_dig);

            printf("\n");
            printf("Calculando...");
            Sleep(1500);
            printf("\n");

            if (numero_dig == 0) {
                resultado = 0;
            }

            else if (numero_dig == 1) {
                resultado = 1;
            }

            else {
                while (contador != numero_dig){
                    resultado = fib1 + fib2;

                    fib1 = fib2;
                    fib2 = resultado;
                    contador ++;
                }
            }
            break;

            default:

                printf("Opção invállida \n\n");
                break;
    }

    printf("Resultado: %i", resultado);
    printf("\n");
    printf("\n");
    system("pause");
    system("cls");
    printf("Deseja calcular uma nova sequência? (1 - SIM / 2 - NÂO) \n");
    scanf("%i", &resposta);
    printf("\n");
    system("pause");
    system("cls");


    } while (resposta == 1);




    return 0;

}
