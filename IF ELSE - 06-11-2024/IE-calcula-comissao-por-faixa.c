#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vendas, comissao;

    printf("Digite a quantidade de vendas: \n");
    scanf("%f", &vendas);

    if (vendas < 0) {
        printf("Valor invalido\n");
        return 1;
    }

    if (vendas < 100000) {
        comissao = vendas * 0.02;
    }
    else if (vendas >= 100000 && vendas <= 200000) {
        comissao = vendas * 0.025;
    }
    else {
        comissao = vendas * 0.03;
    }

    printf("Comissao : R$ %.2f\n", comissao);
    return 0;
}
