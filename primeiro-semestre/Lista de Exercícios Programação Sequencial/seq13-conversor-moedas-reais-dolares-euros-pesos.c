#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, dolares, euros, pesos;

    printf("Insira valor RS: \n");
    scanf("%f", &reais);


    dolares = reais /4.06;
    euros = reais /4.56;
    pesos = reais /0.43;


    printf("Dolares: %.2f\n", dolares);
    printf("Euros: %.2f\n", euros);
    printf("Pesos: %.2f\n", pesos);

    return 0;
}
