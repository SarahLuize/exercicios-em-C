#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp_f, temp_c;

    printf("Conversor de Celsius para Fahrenheit\n");

    printf("Insira o valor da temperatura em Celsius: \n");
    scanf("%f", &temp_c);

    temp_f = (9.0 * temp_c + 32) / 5;


    printf("Temperatura em Fahrenheit: %.1f\n", temp_f);


    return 0;
}
