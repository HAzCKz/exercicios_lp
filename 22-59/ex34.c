#include <stdio.h>

int main()
{
    int quant_estoque, quant_max, quant_min, media;

    scanf("%i", quant_estoque&);
    scanf("%i", quant_max&);
    scanf("%i", quant_min&);

    media =  (quant_max + quant_min)/2;

    if (quant_estoque >= media)
    {
        printf("Nao efetuar compra");
    }
    else
    {
        printf("Efetuar compra");
    }
}
