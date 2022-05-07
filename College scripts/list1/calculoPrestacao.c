#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{

    //==========Starting the code formating prints on console to utf-8==========
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    //==========Script==========

    int latePayment, installments;
    float totalValue, tax, bill;

    printf("Digite aqui o valor total da sua compra/empréstimo(use ponto ao invés de vírgula para os centavos): ");
    scanf("%f", &totalValue);


    printf("\nDigite a taxa diária ou mensal da sua compra/empréstimo(sem usar %%): ");
    scanf("%f", &tax);
    tax = tax/100;

    printf("\nDigite o tempo de atraso das parcelas (em dias caso a taxa seja diária e em meses caso a taxa seja mensal): ");
    scanf("%d", &latePayment);


    printf("\nDigite em quantas vezes você parcelou sua compra ou empréstimo(somente números): ");
    scanf("%d", &installments);

    bill = totalValue + (totalValue*tax*latePayment);

    printf("\n\n==================================================================================================\n"
        "O valor total adicionado os juros de mora é de R$%.2f e o valor de uma prestação é de R$%.2f \n"
        "==================================================================================================\n", bill, bill/installments);
    
    return 0;

    //==========Changing the console output to standard config again==========
    SetConsoleOutputCP(CPAGE_DEFAULT);
}