#include <stdio.h>

int main()
{
    int n;

    do
    {
        scanf("%i", &n);
    }
    while (n > 0);

    printf("%i", n);

    for (int i = 1; i < n; i++)

    {
        printf("Valores ate N: %i\n", i);
    }

}
