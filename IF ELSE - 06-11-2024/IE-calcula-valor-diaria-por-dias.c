#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    float valor;

    printf("Digite uma quantidade de dias: \n");
    scanf("%d", &dias);

    if (dias < 0) {
        printf("Valor da diaria: 0.00");
    }
    else if (dias <5) {
        valor = (dias * 8.00) + (60.00 * dias);
        printf(" Valor da diaria : %.2f", valor);
    }
    else if (dias < 15) {
        valor = (dias * 6.50) + (60.00 * dias);
        printf(" Valor da diaria : %.2f", valor);
    }
    else {
        valor = (dias * 5.50) + (60.00 * dias);
        printf(" Valor da diaria : %.2f", valor);
    }

    return 0;
}
