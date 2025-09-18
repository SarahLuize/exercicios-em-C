#include <stdio.h>
#include <stdlib.h>

int main()
{
    int litro_gas_comum, litro_gas_aditivada;
    float preco_gas_comum, preco_gas_aditivada, gas_comum, gas_aditivada, total;


    printf("Insira valor gas. comum:  \n");
    scanf("%f", &preco_gas_comum);

    printf("Insira a quantidade de litros da gas.comum :  \n");
    scanf("%d", &litro_gas_comum);

    printf("Insira valor gas. aditivada:  \n");
    scanf("%f", &preco_gas_aditivada);

    printf("Insira a quantidade de litros da gas. comum:  \n");
    scanf("%d", &litro_gas_aditivada);


    //calculo

    gas_comum = litro_gas_comum*preco_gas_comum;
    gas_aditivada = litro_gas_aditivada*preco_gas_aditivada;

   total = gas_comum+gas_aditivada;


    //resultado

    printf("Total : %.2f\n", total);


    return 0;
}
