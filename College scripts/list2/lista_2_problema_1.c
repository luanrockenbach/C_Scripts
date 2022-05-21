#include<stdio.h>
#include<locale.h>

int main()
{
    //mudando a linguaguem do programa e o padr�o de entrada de dados

    setlocale(LC_ALL, "Portuguese");

    float height, floorHeight, buildingHeight, floors;
    char heightConfirm;

    //entrada de dados

    printf("==================== ALTURA DO EDIF�CIO ====================\n"
           "\nQual a eleva��o da base em rela��o a rua (em metros)? ");
    scanf("%f", &height);

    printf("\nQuantos andares tem o edif�cio? ");
    scanf("%f", &floors);

    printf("\nQual a altura de cada andar do edif�cio (em metros)? ");
    scanf("%f", &floorHeight);

    //pedir confirma��o de altura caso a altura informada for diferente do padr�o

    if (floorHeight < 2.75 || floorHeight >  3.20)
    {
        printf("\n\n===== TEM CERTEZA QUE A ALTURA DE CADA ANDAR � %.2f metros?[S/N]", floorHeight);
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
            printf("\n\n===== Desculpe n�o entendi sua resposta, por favor rode o programa novamente =====");
            exit(0);
        }

        if(floorHeight < 2,75 || floorHeight > 3,20)
        {
            if(heightConfirm == 'n' || heightConfirm == 'N')
            {
                printf("\n\n===== A ALTURA DE CADA ANDAR AINDA EST� FORA DOS PADR�ES MAS SE ESTIVER CORRETA IGNORE ESTE AVISO");
            }
        }
    }

    buildingHeight = height + (floors*floorHeight);
    printf("\n\n=================================================================================="
          "\nA altura total do seu edif�cio � %.2f metros"
          "\n==================================================================================", buildingHeight);

    return 0;
}
