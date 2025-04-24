#include <stdio.h>

int main()
{
    int c_vendas, v_vendas, salario, v_carro;
    float salario_final;

    scanf("%i", &c_vendas);
    scanf("%i", &v_vendas);
    scanf("%i", &salario);
    scanf("%i", &v_carro);

    salario_final = v_vendas*0.05 + v_carro*c_vendas + salario;

    printf("Salario final: %.2f", salario_final);
}
