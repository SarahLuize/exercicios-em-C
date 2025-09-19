#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char item[100][100];
    int qtde[100];
    int escolha;
    int cont = 0;
    float valorUnitario[100];
    float valorTotal, valorGeral = 0;

    do
    {
        printf("Informe o nome do produto: \n");
        scanf(" %99[^\n]", item[cont]);

        while (getchar() != '\n');


        printf("Informe a quantidade: \n");
        scanf("%d", &qtde[cont]);

        printf("Informe o valor unitario: \n");
        scanf("%f", &valorUnitario[cont]);

        //CALCULOS
        valorTotal = qtde[cont] * valorUnitario[cont] ;

        valorGeral += valorTotal;

        printf("Digite 1 para encerrar o programa, 2 para adicionar mais um produto: \n");
        scanf("%d", &escolha);

        while (getchar() != '\n');

        cont++;

    }
    while (escolha != 1);

    printf("Recibo compras\n\n");

    for (int i = 0; i < cont; i++)
    {
        valorTotal = qtde[i] * valorUnitario[i];
        printf("Item: %s\n", item[i]);
        printf("Quantidade: %d\n", qtde[i]);
        printf("Valor unitário: %.2f\n", valorUnitario[i]);
        printf("Valor total do produto: %.2f\n\n", valorTotal);
    }
        printf("Valor geral da compra: %.2f\n", valorGeral);


        if (escolha == 1)
        {
            return 0;
        }

    }
