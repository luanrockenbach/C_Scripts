#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int registrationOne = 202210694, registrationTwo;

    printf("\n================================== COLEGAS? ====================================="
           "\n\nQual sua matrícula da UFSM? ");
    scanf("%d", &registrationTwo);

    if(registrationTwo < registrationOne - 50 && registrationTwo > registrationOne + 50)
    {
        printf("\n\n======================================================="
               "\nParece que não somos colegas"
               "\n=======================================================");
    }
    else
    {
        printf("\n\n======================================================="
               "\nParece que somos colegas, é us guri"
               "\n=======================================================");
    }
    return 0;
}
