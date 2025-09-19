#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");

    char vendedor1, vendedor2, vendedor3;
    float vendas1, vendas2, vendas3, premio1, premio2, premio3, totalpremio;

    printf("Prêmio para vendedores empresa\n");

    //VENDEDOR + VENDAS 1

    printf("Insira nome vendedor 1: \n");
    scanf(" %c", &vendedor1);

    printf("Insira vendas do vendedor: \n");
    scanf("%f", &vendas1);


     //VENDEDOR + VENDAS 2

     printf("Insira nome vendedor 2: \n");
     scanf(" %c", &vendedor2);

    printf("Insira vendas do vendedor: \n");
    scanf("%f", &vendas2);

     //VENDEDOR + VENDAS 3

     printf("Insira nome vendedor 3: \n");
     scanf(" %c", &vendedor3);

    printf("Insira vendas do vendedor: \n");
    scanf("%f", &vendas3);

    //CALCULO

    premio1 = vendas1 / 9.011;
    premio2 = vendas2 / 9.011;
    premio3 = vendas3 / 9.011;
    totalpremio = premio1+premio2+premio3;

    //RESULTADO

    printf(" %c, prêmio de %.2f\n", vendedor1, premio1);
    printf(" %c, prêmio de %.2f\n", vendedor2, premio2);
    printf(" %c, prêmio de %.2f\n", vendedor3, premio3);

    printf("Total do prêmio: %.2f\n", totalpremio);


    return 0;
}
