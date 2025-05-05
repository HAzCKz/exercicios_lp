#include <stdio.h>

int main()
{
    int n1, n2;
    float res;

    scanf("%i", &n1);
    scanf("%i", &n2);

    res = (n1+n2)/2;

    if (res >= 6)
    {
        printf("Sua média foi %.2f e você está aprovado\n", res);
    }
    else
    {
        printf("Você foi reprovado\n");
    }

}