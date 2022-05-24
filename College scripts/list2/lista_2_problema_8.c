#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //entradas
    int saladaVerde = 10, coxinhasCarne = 12, licor = 6;

    //prato principal
    int massaBolonhesa = 22, bife = 25, pizza = 28;

    //bebida
    int agua = 3, cerveja = 9, sucoLaranja = 5;

    int amountOne=0, amountTwo=0, amountThree=0, amountFour=0, amountFive=0, amountSix=0,
        amountSeven=0, amountEight=0, amountNine=0;

    char a, b;

    int totalValue;

    printf("\n======================= RESTAUTAURANTE DO CHAVES =======================\n"
           "\n\nBem-vindo, gostaria de ver as opções de entrada? [S/N] ");
    scanf("%s", &a);

    if(a == 's' || a == 'S')
    {
        printf("\n\n\n-Salada Verde ...............................................R$%d"
               "\n-Coxinhas de Carne ..........................................R$%d"
               "\n-Licor ......................................................R$%d"
               "\n\n\nGostaria de fazer um pedido?[S/N] ", saladaVerde, coxinhasCarne, licor);
        scanf("%s", &b);

        switch (b)
        {
        case 's':
        case 'S':
            printf("\n\nDigite a quantia de Salada(s) Verde desejada (de 0 até quanto você quiser): ");
            scanf("%d", &amountOne);

            printf("\nDigite a quantia de Coxinhas de Carne desejada (de 0 até quanto você quiser): ");
            scanf("%d", &amountTwo);

            printf("\nDigite a quantia de Licor desejada (de 0 até quanto você quiser, mas beba com moderação): ");
            scanf("%d", &amountThree);

            break;
        default:
            break;
        }
    }

    printf("\n\n-----------------------------------------------------------\n"
           "\nGostaria de ver o prato principal?[S/N] ");
    scanf("%s", &a);

    if(a == 's' || a == 'S')
    {
        printf("\n\n\n-Massa Bolonhesa ...............................................R$%d"
                "\n-Bife ..........................................................R$%d"
                "\n-Pizza .........................................................R$%d"
                "\n\n\nGostaria de fazer um pedido?[S/N] ", massaBolonhesa, bife, pizza);
        scanf("%s", &b);

        switch (b)
        {
        case 's':
        case 'S':
            printf("\n\nDigite a quantia de Massa Bolonhesa desejada (de 0 até quanto você quiser): ");
            scanf("%d", &amountFour);

            printf("\nDigite a quantia de Bife desejada (de 0 até quanto você quiser): ");
            scanf("%d", &amountFive);

            printf("\nDigite a quantia de Pizza desejada (de 0 até quanto você quiser): ");
            scanf("%d", &amountSix);

            break;
        default:
            break;
        }
    }

    printf("\n\n-----------------------------------------------------------\n"
           "\nGostaria de ver as bebidas?[S/N] ");
    scanf("%s", &a);

    if(a == 's' || a == 'S')
    {
        printf("\n\n\n-Água ...............................................R$%d"
                "\n-Cerveja ......................................................R$%d"
                "\n-Suco de Laranja ...................................................R$%d"
                "\n\n\nGostaria de fazer um pedido?[S/N] ", agua, cerveja, sucoLaranja);
        scanf("%s", &b);

        switch (b)
        {
        case 's':
        case 'S':
            printf("\n\nDigite a quantia de garrafa(s) d'água desejada(s) (de 0 até quanto você quiser): ");
            scanf("%d", &amountSeven);

            printf("\nDigite a quantia de Cerveja desejada (de 0 até quanto você quiser, mas beba com moderação): ");
            scanf("%d", &amountEight);

            printf("\nDigite a quantia de Suco de Laranja desejado (de 0 até quanto você quiser): ");
            scanf("%d", &amountNine);

            break;
        default:
            break;
        }
    }

    //calculando total das entradas
    totalValue = (saladaVerde*amountOne) + (coxinhasCarne*amountTwo) + (licor*amountThree);

    //calculando total do prato principal
    totalValue = totalValue + (massaBolonhesa*amountFour) + (bife*amountFive) + (pizza*amountSix);

    //calculando total com as bebidas
    totalValue = totalValue + (agua*amountSeven) + (cerveja*amountEight) + (sucoLaranja*amountNine);

    printf("\n\n\n===== O TOTAL DO SEU PEDIDO É R$%d =====", totalValue);

    return 0;
}
