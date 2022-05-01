#include<stdio.h>
#include<stdlib.h>

int main()
{
int userInput;
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

printf("Digite um numero de 0 a 10.000:");
scanf("%d", &userInput);
printf("%d\n", userInput);

int piInt = (3,14159265358979323846);
unsigned int piUnsignedInt = (3.14159265358979323846);
long int piLongInt = (3.14159265358979323846);
float piFloat = (3.14159265358979323846);
double piDouble = (3.14159265358979323846);

printf("\nOs valores de pi em:\n"
"inteiro: %d\n"
"inteiro sem sinal: %u\n"
"inteiro longo: %li\n"
"float: %1.20f\n"
"double: %1.20lf\n", piInt, piUnsignedInt, piLongInt, piFloat, piDouble);



return 0;


}

