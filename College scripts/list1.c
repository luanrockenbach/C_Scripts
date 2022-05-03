#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

// ========= GETTING ERROR =========

    int tempoAtraso;
    float valor, taxa, prestacao;

    printf("Qual o valor do emprestimo?");
    scanf("%f", &valor);

    printf("\n\nQual a taxa diaria do emprestimo?(Digite sem %%)");
    scanf("%f", &taxa);

    printf("\n\nDigite o tempo de atraso em dias:");
    scanf("%d", tempoAtraso);

    prestacao = valor+(valor*(taxa/(float)100)*(float)tempoAtraso);

    printf("A prestação sera' de %f", prestacao);

    return 0;
}