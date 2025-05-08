#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Par\n");
    }
    else
    {
        printf("Ímpar\n");
    }

    return 0;
}
