#include <stdio.h>

int main()
{
    int hi, hf, res;

    scanf("%i", &hi);
    scanf("%i", &hf);

    res = (24 - hi) + hf;

    if (hi == hf)
    {
        printf("A duração do jogo foi de 24 horas\n");
    }
    else
    {
        printf("A duração do jogo foi de %i horas\n", res);
    }


    
}