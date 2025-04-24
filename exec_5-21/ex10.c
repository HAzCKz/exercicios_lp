#include <stdio.h>

int main()
{
    int salario_h, horas;

    scanf("%i", &salario_h);
    scanf("%i", &horas);

    salario_h = salario_h*horas;

    printf("Salario final: R$%i", salario_h);
}
