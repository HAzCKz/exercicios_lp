#include <stdio.h>
#include <math.h>

int main()
{
    float potencia_lamp, largura, comprimento, area, potencia_f;
    int lampadas;

    scanf("%f", &potencia_lamp);
    scanf("%f", &largura);
    scanf("%f", &comprimento);

    area = largura*comprimento;

    potencia_f =  area * 18;

    lampadas = (int) ceil(potencia_f /potencia_lamp);  

    printf("O número de lâmpadas é: %d\n", lampadas);

}