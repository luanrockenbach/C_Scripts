#include<stdio.h>
#include<locale.h>

int main()
{
    //mudando a linguaguem do programa e o padrão de entrada de dados

    setlocale(LC_ALL, "Portuguese");

    float height, floorHeight, buildingHeight, floors;
    char heightConfirm;

    //entrada de dados

    printf("==================== ALTURA DO EDIFÍCIO ====================\n"
           "\nQual a elevação da base em relação a rua (em metros)? ");
    scanf("%f", &height);

    printf("\nQuantos andares tem o edifício? ");
    scanf("%f", &floors);

    printf("\nQual a altura de cada andar do edifício (em metros)? ");
    scanf("%f", &floorHeight);

    //pedir confirmação de altura caso a altura informada for diferente do padrão

    if (floorHeight < 2.75 || floorHeight >  3.20)
    {
        printf("\n\n===== TEM CERTEZA QUE A ALTURA DE CADA ANDAR É %.2f metros?[S/N]", floorHeight);
        scanf("%s", &heightConfirm);

        switch (heightConfirm)
        {
        case 's':
        case 'S':
            break;
        case 'n':
        case 'N':
            printf("\nDigite a altura de cada andar novamente: ");
            scanf("%f", &floorHeight);
            break;
        default:
            printf("\n\n===== Desculpe não entendi sua resposta, por favor rode o programa novamente =====");
            exit(0);
        }

        if(floorHeight < 2,75 || floorHeight > 3,20)
        {
            if(heightConfirm == 'n' || heightConfirm == 'N')
            {
                printf("\n\n===== A ALTURA DE CADA ANDAR AINDA ESTÁ FORA DOS PADRÕES MAS SE ESTIVER CORRETA IGNORE ESTE AVISO");
            }
        }
    }

    buildingHeight = height + (floors*floorHeight);
    printf("\n\n=================================================================================="
          "\nA altura total do seu edifício é %.2f metros"
          "\n==================================================================================", buildingHeight);

    return 0;
}
