#include <stdio.h>

int main()
{
    int num;

    scanf("%i", &num);

    if(num > 0)
    {
        printf("POSITIVO\n");
    }
    else if (num < 0)
    {
        printf("NEGATIVO\n");
    }
    else
    {
        printf("ZERO\n");
    }

}
