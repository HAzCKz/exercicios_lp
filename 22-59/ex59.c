#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == 90 || b == 90 || c == 90)
    {
        printf("Triângulo Retângulo\n");
    }
    else if (a > 90 || b > 90 || c > 90)
    {
        printf("Triângulo Obtusângulo\n");
    }
    else
    {
        printf("Triângulo Acutângulo\n");
    }

}

