#include <stdio.h>

int main()
{
    int lados;
    float medida;

    scanf("%d", &lados);
    scanf("%f", &medida);

    if (lados < 3)
    {
        printf("N�O � UM POL�GONO\n");
    }
    else if (lados == 3)
    {
        printf("TRI�NGULO\n");
        printf("Per�metro: %.2f\n", 3 * medida);
    }
    else if (lados == 4)
    {
        printf("QUADRADO\n");
        printf("�rea: %.2f\n", medida * medida);
    }
    else if (lados == 5)
    {
        printf("PENT�GONO\n");
    }
    else
    {
        printf("POL�GONO N�O IDENTIFICADO\n");
    }

}

