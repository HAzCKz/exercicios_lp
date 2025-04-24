#include <stdio.h>

int main()
{
    float n1, n2, n3, media_final;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media_final = (n1*2 + n2*3 + n3*5)/10;

    printf("Media Final: %f\n", media_final);
}