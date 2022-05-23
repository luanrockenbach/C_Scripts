#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float transaction, tax, finalValue, taxOnFinalValue;

    printf("\n=================================================\n\n"
           "Digite o valor da transa��o: ");
    scanf("%f",&transaction);

    tax = transaction*0.02;

    printf ("\n\nO valor da taxa � de: R$%0.2f\n", tax);

    if (tax < 500) {
        taxOnFinalValue = transaction + tax;
        printf("\n\n=============================================\n"
               "\nO valor da taxa foi definido como taxa m�nima\n"
               "O valor da taxa � de R$%.2f", taxOnFinalValue);
    }
    else {
        taxOnFinalValue = tax;
        printf("\n\n=============================================\n"
               "\nO valor n�o foi definido como taxa b�sica\n"
               "O valor da taxa � de R$%.2f", taxOnFinalValue);
    }

    finalValue = transaction + taxOnFinalValue;

    printf("O valor final da venda � R$%.2f\n"
           "O valor final do imposto � de R$%.2f\n"
           "O imposto equivale a %.2f %% do valor final de venda\n", finalValue, taxOnFinalValue, (tax / finalValue) * 100);
}
