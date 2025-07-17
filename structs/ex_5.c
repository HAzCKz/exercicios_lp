#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} data;

int data_valida(data d1, data d2)
{
    int converter(data d)
    {
        int total = d.dia;

        for (int m = 1; m < d.mes; m++)
        {
            if (m == 2)
                total += 28;
            else if (m == 4 || m == 6 || m == 9 || m == 11)
                total += 30;
            else
                total += 31;
        }

        total += d.ano * 365;

        return total;
    }

    int dias1 = converter(d1);
    int dias2 = converter(d2);

    int diferenca = dias1 - dias2;
    if (diferenca < 0)
        diferenca = diferenca -1;

    return diferenca;
}

int main()
{
    data date[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%i", &date[i].dia);
        scanf("%i", &date[i].mes);
        scanf("%i", &date[i].ano);
    }

    int diferenca = data_valida(date[0], date[1]);
    printf("Dias decorridos entre as duas datas: %d\n", diferenca);

    return 0;
}

