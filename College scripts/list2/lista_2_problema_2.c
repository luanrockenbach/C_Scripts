#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, result, average;

    printf("=================== MÉDIA  E PRODUTO==================="
           "\n\ndigite um número inteiro (sem vírgula): ");
    scanf("%d", &num1);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &num2);

    printf("\nDigite mais um número inteiro: ");
    scanf("%d", &num3);

    result = (num1*num2*num3);
    average = result/3;

    printf("\n\n========================================================="
           "\n\nA média dos valores inseridos é %d"
           "\nO produto dos 3 valores inseridos é %d"
           "\n\n=========================================================", average, result);
    return 0;
}
