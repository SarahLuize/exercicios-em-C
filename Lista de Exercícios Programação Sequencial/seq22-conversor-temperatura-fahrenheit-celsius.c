#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp_c, temp_f;


    printf("Conversor Fahrenheit para Celsius\n");

    printf("Insira a temperatura em Fahrenheit: \n");
    scanf("%f", &temp_f);

    temp_c = (temp_f - 32)* 5 / 9;

    temp_c = round (temp_c* 10) /10;
    printf("Temperatura em Celsius: %f", temp_c);


    return 0;
}
