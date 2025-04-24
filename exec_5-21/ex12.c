#include <stdio.h>

int main()
{
    int salario, reajuste;

    scanf("%i", &salario);
    scanf("%i", &reajuste);

    salario = salario*reajuste/100+salario;

    printf("Salario: %i", salario);
}
