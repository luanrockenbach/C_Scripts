#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, result, average;

    printf("=================== M�DIA  E PRODUTO==================="
           "\n\ndigite um n�mero inteiro (sem v�rgula): ");
    scanf("%d", &num1);

    printf("\nDigite outro n�mero inteiro: ");
    scanf("%d", &num2);

    printf("\nDigite mais um n�mero inteiro: ");
    scanf("%d", &num3);

    result = (num1*num2*num3);
    average = result/3;

    printf("\n\n========================================================="
           "\n\nA m�dia dos valores inseridos � %d"
           "\nO produto dos 3 valores inseridos � %d"
           "\n\n=========================================================", average, result);
    return 0;
}
