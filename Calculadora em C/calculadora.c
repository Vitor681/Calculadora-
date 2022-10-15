#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    printf("\n\n\n - Vitor de Souza\n - Analise e desenvolvimento de sistemas\n - Universidade LaSalle Canoas-RS\n - Matricula: 20221708\n - Usuario no GitHub: Vitor681\n\n\n");

    int opcao;
    do
    {
        printf(" digite 1 para soma\n digite 2 para subtracao\n digite 3 para multiplicacao\n digite 4 para divisao\n digite 5 para potencia\n digite 6 para raiz quadrada\n digite 0 para sair\n\n");
        scanf("%d", &opcao);

        if (opcao > 0)
        {
            switch (opcao)
            {

            case 1:;
                float nmr1, nmr2;
                printf("digite a parcela 1\n");
                scanf("%f", &nmr1);
                printf("digite a parcela 2\n");
                scanf("%f", &nmr2);
                printf("resultado da soma: %0.2f\n\n", nmr1 + nmr2);
                break;

            case 2:;
                float nmr3, nmr4;
                printf("digite o adtivo\n");
                scanf("%f", &nmr3);
                printf("digite o subtrativo\n");
                scanf("%f", &nmr4);
                printf("resultado da subtracao: %0.2f\n\n", nmr3 - nmr4);
                break;

            case 3:;
                float nmr5, nmr6;
                printf("digite o fator 1\n");
                scanf("%f", &nmr5);
                printf("digite o fator 2\n");
                scanf("%f", &nmr6);
                printf("resultado da multiplicacao: %0.2f\n\n", nmr5 * nmr6);
                break;

            case 4:;
                float nmr7, nmr8;
                printf("digite o dividendo\n");
                scanf("%f", &nmr7);
                printf("digite o divisor\n");
                scanf("%f", &nmr8);
                while (nmr8 == 0)
                {
                    printf("Nao e possivel fazer divisao por 0! Por favor digite um numero valido: \n");
                    scanf("%f", &nmr8);
                }
                printf("resultado da divisao: %0.2f\n\n", nmr7 / nmr8);
                break;

            case 5:;
                float nmr10, nmr11;
                printf("digite a base\n");
                scanf("%f", &nmr10);
                printf("digite o expoente\n");
                scanf("%f", &nmr11);
                printf("resultado da potencia: %0.2f\n\n", pow(nmr10, nmr11));
                break;

            case 6:;
                float numero;
                printf("digite o numero que deseje descobrir a raiz quadrada\n");
                scanf("%f", &numero);
                printf("resultado da raiz quadrada: %0.3f\n\n", sqrt(numero));
                break;
            default:
                printf("opcao invalida! Por favor digite uma opcao valida\n\n");
            }
        }
    } while (opcao != 0);
}
