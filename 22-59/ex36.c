#include <stdio.h>

int main()
{
    int n1, n2, n3;

    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);

    if (n1 < n2 && n2 < n3)
    {
        printf("O maior: %i\n", n3);
    }
    else if (n1 < n2 && n3 < n2)
    {
        printf("O maior: %i\n", n2);
    }
    else
    {
        printf("O maior: %i\n", n1);
    }

}
