#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char userInput;
    float height, idealWeight;

    printf("\n============================ PESO IDEAL ============================\n\n"
           "Olá, você é do gênero Masculino ou Feminino? [F/M] ");
    scanf("%s", &userInput);

    printf("Qual a sua altura? (no formato: m,cm): ");
    scanf("%f", &height);

    switch (userInput)
    {
    case 'm':
    case 'M':
        idealWeight = (72.7 * height - 58);
        break;
    case 'f':
    case 'F':
        idealWeight = (62.1 * height) - 44.7;
        break;
    default:
        printf("\n\nDesculpe, não entendi. Tente rodar o programa de novo");
        exit(0);
    }

    printf("\n\n=====================================================================\n"
           "O peso ideal recomendado para sua altura é de %.2f kg"
           "\n=====================================================================\n", idealWeight);

    return 0;
}
