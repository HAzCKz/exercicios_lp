#include <stdio.h>

int main()
{
    int odometro_i, odometro_f, combustivel, valor;

    float km_total, lucro;

    scanf("%i", &odometro_i);
    scanf("%i", &odometro_f);
    scanf("%i", &combustivel);
    scanf("%i", &valor);

    km_total = (odometro_f - odometro_i) / combustivel;

    lucro = combustivel * 2.9;

    lucro =  valor - lucro;

    printf("Media de consumo (Km/L): %.2f\n", km_total);

    printf("Lucro Liquido: R$%.2f\n", lucro);

}
