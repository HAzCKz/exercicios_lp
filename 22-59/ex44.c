#include <stdio.h>

int main()
{
    int codigo, senha;

    scanf("%i", &codigo);

    if (codigo != 1234)
    {
        printf("Usuário inválido!\n");
    }
    else
    {
        scanf("%i", &senha);

        if (senha != 9999)
        {
            printf("Senha incorreta\n");
        }
        else
        {
            printf("Acesso permitido\n");
        }
    }
}

