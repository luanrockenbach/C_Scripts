#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float productValue, totalValue, mg = 0.07, sp = 0.12, rj = 0.15, ms = 0.08;
    int a;


    printf("\n============================ GRAÇAS A NEWTON, A ÚLTIMA ============================\n\n"
           "\nQual o valor do produto? ");
    scanf("%f", &productValue);

    printf("\n\nQual o estado?"
           "\n\nMinas Gerais[1]"
           "\nSão Paulo[2]"
           "\nRio de Janeiro[3]"
           "\nMato Grosso do Sul[4]: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        totalValue = productValue*(1+mg/100);
        printf("\n\n========================================================================="
               "\nO valor de venda desse produto em Minas Gerais vai ser de R$%.2f"
               "\n=========================================================================\n", totalValue);
        break;
    case 2:
        totalValue = productValue*(1+sp/100);
        printf("\n\n========================================================================="
               "\nO valor de venda desse produto em São Paulo vai ser de R$%.2f"
               "\n=========================================================================\n", totalValue);
        break;
    case 3:
        totalValue = productValue*(1+rj/100);
        printf("\n\n========================================================================="
               "\nO valor de venda desse produto no Rio de Janeiro vai ser de R$%.2f"
               "\n=========================================================================\n", totalValue);
        break;
    case 4:
        totalValue = productValue*(1+ms/100);
        printf("\n\n========================================================================="
               "\nO valor de venda desse produto em Mato Grosso do Sul vai ser de R$%.2f"
               "\n=========================================================================\n", totalValue);
        break;
    default:
        printf("\n\n===== ALGO DEU ERRADO, RODE O PROGRAMA DE NOVO =====\n");
        exit(0);
    }


    return 0;
}
