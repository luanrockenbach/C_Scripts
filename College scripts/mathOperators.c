#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int pessoas, laranjas;

    printf("\nDigite quantas pessoas estao reunidas:");
    scanf("%d", &pessoas);

    printf("\nDigite quantas laranjas temos:");
    scanf("%d", &laranjas);

    printf("\nCada um pode comer %d laranjas \n"
        "E vai sobrar %d laranjas\n", laranjas/pessoas, laranjas%pessoas);

    int lightSpeed = 299792458;
    int earthCircumference = 40000;

    printf("\n ==========VELOCIDADE DA LUZ==========\n"
        "\nA velocidade da luz e de %d m/s\n"
        "E a circunferencia da terra e de %d km", lightSpeed, earthCircumference);

    earthCircumference = earthCircumference*1000;

    float time = (float)earthCircumference/lightSpeed;

    printf("\nA luz leva %.6f s para dar a volta na terra", time);

    float peso, altura;


    printf("\n\n==========CALCULO DE IMC==========\n\n"
        "\nQual seu peso? ");
    scanf("%f", &peso);
    printf("\nQual sua altura?(no formato x.xx) ");
    scanf("%f", &altura);

    float imc = peso/pow(altura, 2);
    printf("\nSeu IMC e de %.3f", imc);



    return 0;
}