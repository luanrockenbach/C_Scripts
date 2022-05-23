#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float constantAcceleration, initialPosicion, initialVelocity, time, velocity, finalPosition;

    printf("\n====================== ACELERAÇÃO DE UM CORPO ======================\n\n"
           "Informe a aceleração do corpo (em m/s²): ");
    scanf("%f", &constantAcceleration);

    printf("Informe a posição inicial do corpo (em metros): ");
    scanf("%f", &initialPosicion);

    printf("Informe a velocidade inicial do corpo (em m/s): ");
    scanf("%f", &initialVelocity);

    printf("Informe o tempo transcorrido desde o início do movimento (em segundos): ");
    scanf("%f", &time);

    velocity = initialVelocity + constantAcceleration * time;

    finalPosition = initialPosicion + initialVelocity * time +(constantAcceleration * (time * time))/2;

    printf("A velocidade final do corpo é de %.3f m/s\n"
           "A posição final do corpo é de %.3f metros\n", velocity, finalPosition);

    return 0;
}
