#include <stdio.h>

int main()
{
    int maca;
    
    float res;

    scanf("%i", &maca);

    if (maca < 12)
    {
        res = maca * 1.30;
        printf("Custo: R$%.2f\n", res);
    }
    else
    {
        printf("Custo: R$%i.00\n", maca);
    }

}
