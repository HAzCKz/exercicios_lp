#include <stdio.h>

int main()
{
    int anos, meses, dias, total;

    scanf("%i", &anos);
    scanf("%i", &meses);
    scanf("%i", &dias);

    total = anos*365 + meses*30 + dias;

    printf("Sua idade em dias: %i\n", total);
}
