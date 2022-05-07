#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main()
{
    //==========Starting the code formating prints on console to utf-8==========
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    //==========Script==========

    int weightedAverageOne = 2, weightedAverageTwo = 3, weightedAverageThree = 5;
    float testOne, testTwo, testThree, finalGrade;
    char controlAverage;

    printf("\nDigite a nota da primeira prova: ");
    scanf("%f", &testOne);

    printf("\nDigite a nota da segunda prova: ");
    scanf("%f", &testTwo);

    printf("\nDigite a nota da terceira prova: ");
    scanf("%f", &testThree);

    //=====Receiving the weighted average of each test=====

    printf("\n\n========================================================================================\n\n"
        "Os pesos estão dispostos de forma que:\n"
        "\nA PRIMEIRA PROVA tem peso %d\n"
        "A SEGUNDA PROVA tem peso %d\n"
        "E a TERCEIRA PROVA tem peso %d\n"
        "\nGostaria de manter estes pesos?(s/n) ", weightedAverageOne, weightedAverageTwo, weightedAverageThree);

    scanf("%s", &controlAverage);

    if(controlAverage == 'n' || controlAverage == 'N')
    {
        printf("\nDigite o peso da PRIMEIRA PROVA: ");
        scanf("%d", &weightedAverageOne);

        printf("\nDigite o peso da SEGUNDA PROVA: ");
        scanf("%d", &weightedAverageTwo);

        printf("\nDigite o peso da TERCEIRA PROVA: ");
        scanf("%d", &weightedAverageThree);
    }
    else if(controlAverage == 's' || controlAverage == 'S')
    {
        printf("OK, usando pesos atuais para calcular a média");
    }
    else
    {
        printf("Desculpe, não entendi sua resposta. Estarei usando os pesos %d, %d e %d para fazer o cálculo", 
            weightedAverageOne, weightedAverageTwo, weightedAverageThree);
    }

    finalGrade = ((testOne * weightedAverageOne) + (testTwo * weightedAverageTwo) + (testThree * weightedAverageThree)) / (
        weightedAverageOne + weightedAverageTwo + weightedAverageThree);

    printf("\n\n========================================================================================"
            "\nA MÉDIA DO ALUNO É DE %.1f", finalGrade);

    if(finalGrade <= 6.0)
    {
        printf("\nO aluno está de recuperação/reprovado\n");
    }
    else
    {
        printf("\nO aluno está aprovado, parabéns\n");
    }
    
    return 0;

    //==========Changing the console output to standard config again==========
    SetConsoleOutputCP(CPAGE_DEFAULT);
}