#include <stdio.h>
#include <math.h>

int main()
{
    int comprimento, largura, altura, area;
    float caixa;

    scanf("%i", &comprimento);
    scanf("%i", &largura);
    scanf("%i", &altura);

    area = 2 * altura * (comprimento + altura);

    caixa = area /1.5;

    printf("Quantidade de caixas de azulejo: %f\n", caixa);
}