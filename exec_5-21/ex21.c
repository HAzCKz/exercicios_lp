#include <stdio.h>

int main()
{
    int comprimento, n_voltas, reabastecimentos, combustivel;

    int volta_1, dist, litros;

    scanf("%i", &comprimento);
    scanf("%i", &n_voltas);
    scanf("%i", &reabastecimentos);
    scanf("%i", &combustivel);

    volta_1 = n_voltas/reabastecimentos;

    dist = comprimento * volta_1 /1000;

    litros = dist/combustivel; 

    printf("O minimo de combustivel é: %i\n", litros);
}