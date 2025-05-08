#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a == b && b == c)
    {
        printf("Triângulo Equilátero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Triângulo Isósceles\n");
    }
    else
    {
        printf("Triângulo Escaleno\n");
    }

}

