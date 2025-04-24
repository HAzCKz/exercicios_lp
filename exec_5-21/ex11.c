#include <stdio.h>

int main()
{
    int t_eleitores, brancos, nulos, validos, total;

    scanf("%i", &t_eleitores);
    scanf("%i", &brancos);
    scanf("%i", &nulos);
    scanf("%i", &validos);

    brancos = brancos*100/t_eleitores;
    nulos = nulos*100/t_eleitores;
    validos = validos*100/t_eleitores;

    printf("A procentegem de votos brancos: %i%c \n", brancos, 37);
    printf("A procentegem de votos nulos: %i%c\n", nulos, 37);
    printf("A procentegem de votos validos: %i%c \n", validos, 37);

}
