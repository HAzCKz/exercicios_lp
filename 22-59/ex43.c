#include <stdio.h>

int main()
{
    int h1, h2, m1, m2;
    int mais_velho, mais_novo, mais_velha, mais_nova;
    int soma, produto;

    scanf("%i", &h1);
    scanf("%i", &h2);
    scanf("%i", &m1);
    scanf("%i", &m2);

    if (h1 > h2)
    {
        mais_velho = h1;
        mais_novo = h2;
    }
    else
    {
        mais_velho = h2;
        mais_novo = h1;
    }

    if (m1 > m2)
    {
        mais_velha = m1;
        mais_nova = m2;
    }
    else
    {
        mais_velha = m2;
        mais_nova = m1;
    }

    soma = mais_velho + mais_nova;
    produto = mais_novo * mais_velha;

    printf("A soma: %i\n", soma);
    printf("O produto: %i\n", produto);

}

