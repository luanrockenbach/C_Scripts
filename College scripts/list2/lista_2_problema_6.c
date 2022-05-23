#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int occupants;
    float pressure, load;

    printf("\n==================== PRESSÃO DOS PNEUS ====================\n\n"
           "\nQuantos ocupantes à no veículo? ");
    scanf("%d", &occupants);

    printf("\nQual é a carga (em kg) no compartimento de carga do veículo? ");
    scanf("%f", &load);

    pressure = 20 + 4 * occupants + load / 50;

    if(pressure < 25)
    {
        printf("\n\n================================================================================"
               "\n25 PSI é o mais aconselhável para você");
    }
    else if(pressure > 35)
    {
        printf("\n\n================================================================================"
               "\n35 PSI é o mais aconselhável para você (e reduzir a carga, se possível)");
    }
    else
    {
        printf("\n\n================================================================================"
               "\n%.2f PSI é o mais aconselhável para você", pressure);
    }
    printf("\n================================================================================\n");

    return 0;
}
