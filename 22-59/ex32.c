#include <stdio.h>

int main()
{
    int salario, vendas, res;

    scanf("%i", &salario);
    scanf("%i", &vendas);


    if (vendas > 1500)
    {
        res = (1500*0.03 + salario) + (vendas - 1500)*0.05;
    }
    else
    {
        res = vendas * 0.03 + salario;
    }

    printf("Total: %i", res);


}

