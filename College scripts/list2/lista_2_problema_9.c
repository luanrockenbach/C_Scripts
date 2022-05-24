#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, carYear;
    float devaluation, carValue, carKm;

    printf("\n============================== DESVALORIZAÇÃO =============================="
           "\n\nQual o seu veículo?\n\n"
           "Carro[1]\n"
           "Moto[2]\n"
           "Bicicleta[3]: ");
    scanf("%d", &a);

    if(a==1)
    {
        printf("\n\n\n----------------------------------------------------------------------------"
               "\n\nQual o valor de aquisição do seu carro? ");
        scanf("%f", &carValue);

        printf("\nQuantos km's rodados tem seu carro? ");
        scanf("%f", &carKm);

        printf("\nQual o ano de fabricação do seu carro? ");
        scanf("%d", &carYear);

        if(carYear<2001)
        {
            carYear = 2001;
        }

        devaluation = (carValue/60) * (1+carKm/20000) / (carYear-2000);

        printf("\n\n\n==============================================================================\n"
               "A desvalorização mensal do seu carango é de R$%.2f"
               "\n==============================================================================\n", devaluation);
        exit(0);

    }
    else if(a==2)
    {
        printf("\n\n\n----------------------------------------------------------------------------"
               "\n\nQual o valor de aquisição da sua moto? ");
        scanf("%f", &carValue);

        printf("\nQuantos km's rodados tem sua moto? ");
        scanf("%f", &carKm);

        devaluation = (carValue/120) * (1+carKm/10000);

        printf("\n\n\n==============================================================================\n"
               "A desvalorização mensal da sua motoca é de R$%.2f"
               "\n==============================================================================\n", devaluation);
        exit(0);
    }
    else if(a==3)
    {
        printf("\n\n\n----------------------------------------------------------------------------"
               "\n\nQual o valor de aquisição da sua bicicleta? ");
        scanf("%f", &carValue);

        devaluation = carValue/1000;

        printf("\n\n\n==============================================================================\n"
               "A desvalorização mensal da sua magrela é de R$%.2f"
               "\n==============================================================================\n", devaluation);
        exit(0);
    }
    else
    {
        printf("\n\n=== DESCULPE, ALGO DEU ERRADO. RODE O PROGRAMA NOVAMENTE ===\n\n");
    }

    return 0;
}
