#include <stdio.h>

int main()
{
    int a, b, operacao;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &operacao);

    if (operacao == 1)
    {
        printf("Resultado: %d\n", a + b);
    }
    else if (operacao == 2)
    {
        printf("Resultado: %d\n", a - b);
    }
    else if (operacao == 3)
    {
        if (b != 0)
        {
            printf("Resultado: %.2f\n", (float)a / b);
        }
        else
        {
            printf("Erro: Divisão por zero!\n");
        }
    }
    else if (operacao == 4)
    {
        printf("Resultado: %d\n", a * b);
    }

}
