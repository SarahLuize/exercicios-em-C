#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double vendas, comissao;

    printf("Insira o valor de vendas!\n");
    scanf("%lf", &vendas);

    if (vendas < 50000.00) {
        comissao = vendas * 0.025;
    }
    else {
        comissao = vendas * 0.032;
    }

    comissao = round(comissao*100)/100;

    printf("Valor de comissao: %lf\n", comissao);


    return 0;
}
