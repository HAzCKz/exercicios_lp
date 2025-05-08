#include <stdio.h>

int main()
{
    float n1, n2, media;

    scanf("%f", &n1);
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("Media: %.1f\n", media);

    if (media >= 6.0)
    {
        printf("PARABÉNS! Você foi aprovado!\n");
    }
    else
    {
        printf("Voce foi REPROVADO!")
    }

}
