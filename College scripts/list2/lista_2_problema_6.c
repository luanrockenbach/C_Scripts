#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int occupants;
    float pressure, load;

    printf("\n==================== PRESS�O DOS PNEUS ====================\n\n"
           "\nQuantos ocupantes � no ve�culo? ");
    scanf("%d", &occupants);

    printf("\nQual � a carga (em kg) no compartimento de carga do ve�culo? ");
    scanf("%f", &load);

    pressure = 20 + 4 * occupants + load / 50;

    if(pressure < 25)
    {
        printf("\n\n================================================================================"
               "\n25 PSI � o mais aconselh�vel para voc�");
    }
    else if(pressure > 35)
    {
        printf("\n\n================================================================================"
               "\n35 PSI � o mais aconselh�vel para voc� (e reduzir a carga, se poss�vel)");
    }
    else
    {
        printf("\n\n================================================================================"
               "\n%.2f PSI � o mais aconselh�vel para voc�", pressure);
    }
    printf("\n================================================================================\n");

    return 0;
}
