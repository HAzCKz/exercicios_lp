#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == 90 || b == 90 || c == 90)
    {
        printf("Tri�ngulo Ret�ngulo\n");
    }
    else if (a > 90 || b > 90 || c > 90)
    {
        printf("Tri�ngulo Obtus�ngulo\n");
    }
    else
    {
        printf("Tri�ngulo Acut�ngulo\n");
    }

}

