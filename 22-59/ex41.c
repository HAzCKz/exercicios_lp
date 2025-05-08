#include <stdio.h>

int main()
{
    int n1, n2;

    scanf("%i %i", &n1, &n2);

    if (n1 == n2)
    {
        printf("Sao iguais!\n");
    }
    else if (n1 > n2)
    {
        printf("O primeiro e maior\n");
    }
    else
    {
        printf("O segundo e maior\n");
    }
}
