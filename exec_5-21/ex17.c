#include <stdio.h>

int main()
{
    int raio;
    float area; 

    scanf("%i", &raio);

    area = raio*raio*3.14159265359;

    printf("Area: %f\n", area);
}