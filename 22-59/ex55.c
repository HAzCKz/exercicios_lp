#include <stdio.h>

int main()
{
    int lados;
    float medida;

    scanf("%d", &lados);
    scanf("%f", &medida);

    if (lados < 3)
    {
        printf("NÃO É UM POLÍGONO\n");
    }
    else if (lados == 3)
    {
        printf("TRIÂNGULO\n");
        printf("Perímetro: %.2f\n", 3 * medida);
    }
    else if (lados == 4)
    {
        printf("QUADRADO\n");
        printf("Área: %.2f\n", medida * medida);
    }
    else if (lados == 5)
    {
        printf("PENTÁGONO\n");
    }
    else
    {
        printf("POLÍGONO NÃO IDENTIFICADO\n");
    }

}

