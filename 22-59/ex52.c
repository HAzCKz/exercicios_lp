#include <stdio.h>

int main()
{
    float h, peso;
    int sexo;

    scanf("%f", &h);
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        peso = (62.1 * h) - 44.7;
    }
    else if (sexo == 2)
    {
        peso = (72.7 * h) - 58;
    }

    printf("Peso ideal: %.2f\n", peso);

}

