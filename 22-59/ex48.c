#include <stdio.h>

int main()
{
    float n1, n2, optativa, media;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &optativa);

    if (optativa != -1)
    {
        if (n1 < n2 && optativa > n1)
        {
            n1 = optativa;
        }
        else if (n2 < n1 && optativa > n2)
        {
            n2 = optativa;
        }
    }

    media = (n1 + n2) / 2;

    printf("Media: %.1f\n", media);

    if (media >= 6.0)
    {
        printf("Aprovado\n");
    }
    else if (media < 3.0)
    {
        printf("Reprovado\n");
    }
    else
    {
        printf("Exame\n");
    }

}
