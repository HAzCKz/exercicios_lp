#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a == b && b == c)
    {
        printf("Tri�ngulo Equil�tero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Tri�ngulo Is�sceles\n");
    }
    else
    {
        printf("Tri�ngulo Escaleno\n");
    }

}

