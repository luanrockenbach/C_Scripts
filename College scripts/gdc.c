#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    int var1, var2, result;
    setlocale(LC_ALL, "Portuguese");
    
    printf("===================================================================\n"
            "Digite um Número: ");
    scanf("%d", &var1);
    printf("\n\nDigite outro Número: ");
    scanf("%d", &var2);
    
    for(int i=1; i!=var1; i++)
    {
        if(var1 % i == 0 && var2 % i == 0)
        {
            result = i;
        }
    }
    
    printf("\n\n-------------------------------------------------------------------"
            "\nO MDC dos valores é %d", result);
    return 0;
}