#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    scanf("%f", &fahrenheit);

    celsius = ((fahrenheit - 32)/9)*5;

    printf("Celsius: %f\n", celsius);
}