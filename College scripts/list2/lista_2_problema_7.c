#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int registrationOne = 202210694, registrationTwo;

    printf("\n================================== COLEGAS? ====================================="
           "\n\nQual sua matr�cula da UFSM? ");
    scanf("%d", &registrationTwo);

    if(registrationTwo < registrationOne - 50 && registrationTwo > registrationOne + 50)
    {
        printf("\n\n======================================================="
               "\nParece que n�o somos colegas"
               "\n=======================================================");
    }
    else
    {
        printf("\n\n======================================================="
               "\nParece que somos colegas, � us guri"
               "\n=======================================================");
    }
    return 0;
}
