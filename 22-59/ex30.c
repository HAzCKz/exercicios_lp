#include <stdio.h>

int main()

    int horas_m, salario_hora;
    float salario_base, horas_extras = 0, valor_horas_extras = 0, total;
    const int HORAS_MES = 160;

    scanf("%f", &horas_m);
    scanf("%f", &salario_hora);

    if (horas_m > HORAS_MES)
    {
        horas_extras = horas_m - HORAS_MES;
        salario_base = HORAS_MES * salario_hora;
        valor_horas_extras = horas_extras * (salario_hora * 1.5);
    }
    else
    {
        salario_base = horas_m * salario_hora;
    }

    total = salario_base + valor_horas_extras;

    printf("Total R$ %.2f\n", total);

}
