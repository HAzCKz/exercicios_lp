#include <stdio.h>

int main()
{
    int ano_nasc, ano, res;

    scanf("%i", &ano_nasc);
    scanf("%i", &ano);

    res = ano - ano_nasc;

    if (res >= 16)
    {
        printf("Você pode votar\n");
    }
    else
    {
        printf("Você não pode votar\n");
    }
    
}