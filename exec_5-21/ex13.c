#include <stdio.h>

int main()
{
    float custo;

    scanf("%f", &custo);

    custo = custo*0.28 + custo*0.45 + custo;

    printf("Total: %f", custo);

}
