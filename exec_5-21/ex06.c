#include <stdio.h>

int main()
{
    int lado, altura, area;

    printf("Lado: ");
    scanf("%i", &lado);

    printf("Altura: ");
    scanf("%i", &altura);

    area = lado * altura;

    printf("Area: %i\n", area);
}
