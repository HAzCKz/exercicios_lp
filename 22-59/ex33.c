#include <stdio.h>

int main()
{
    int n_conta, saldo, debito, credito, saldo_atual;

    scanf("%i", &n_conta);
    scanf("%i", &saldo);
    scanf("%i", &debito);
    scanf("%i", &credito);

    saldo_atual = saldo - debito + credito;
    printf("Seu saldo: %i\n", saldo_atual);

    if (saldo_atual >=0)
    {
        printf("POSITIVO\n");
    }
    else
    {
        printf("NEGATIVO\n");
    }


}
