#include <stdio.h>

int main()
{
    char nome[100], sexo;

    float altura, peso;

    scanf(" %c", &nome);
    scanf("%c", &sexo);
    scanf("%i", &altura);

    if (sexo == 'F')
    {
        peso = (altura*62.1) - 44.7;
    }
    else
    {
        peso = (altura*72.7) - 58;
    }

    printf("Peso: %.2f\n", peso);
}
