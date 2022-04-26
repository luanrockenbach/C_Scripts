#include<stdio.h>
#include<stdlib.h>

int main()
{
float userInput;
int number1 = 99;
char letterA = 'A';
float floatNumber = -0.9999;
double floatnumberDouble;

//Char operator

printf("Hello!!\n"
"\nEscrevo uma letra: %c\n"
"Escrevo uma letra: %d\n"
"Escrevo uma letra: %f\n", letterA, letterA);

letterA = letterA+32;

printf("Escrevo uma letra: %c\n"
"\n================================\n", letterA);

//Int operator

printf("\nEscrevo um numero inteiro: %d\n"
"Escrevo um numero inteiro: %i\n"
"\n================================\n", number1, number1);

//Float operator

printf("\nEscrevo um float: %f\n"
"Escrevo um float: %5.3f\n"
"Escrevo um float: %5.5f\n"
"Escrevo um float: %+f\n"
"Escrevo um float: % f\n", floatNumber, floatNumber, floatNumber, floatNumber, floatNumber);

floatNumber = letterA+number1+0.01;
floatnumberDouble = letterA+number1+0.01;

printf("\nEscrevo um outro float: %f\n"
"Escrevo um float: %5.3f\n"
"Escrevo um float: %5.5f\n"
"Escrevo um float: %+f\n"
"Escrevo um float: % f\n", floatNumber, floatNumber, floatNumber, floatNumber, floatNumber);


//Double operator

printf("\nEscrevo um double float: %lf\n"
"Escrevo um double: %5.3lf\n"
"Escrevo um double: %5.5lf\n"
"Escrevo um double: %+lf\n"
"Escrevo um double: % lf\n", floatnumberDouble, floatnumberDouble, floatnumberDouble, floatnumberDouble, floatnumberDouble);

printf("\n\n======EXERCICIOS======\n\n");

printf("Digite um numero de 0 a 10.000: ");
scanf("%f", &userInput);
printf("%5.1f", userInput);

return 0;
}

