#include <stdio.h>
#include <stdlib.h>
#define TAM 12

int main()
{
    int i_maior = 0, i = 0, j = 0, temp = 0;
    int idade[TAM];

    for(i = 0; i < TAM; i++)
    {
        printf("Digite uma idade. %d\n", i+1);
        scanf("%d", &idade[i]);

        if(idade[i] >= 18)
        {
            i_maior++;
        }
    }

    //SAÍDA

    printf("\n RESULTADO \n");
    printf("\n Maiores de idade : %d \n", i_maior);

   // ORDENAR IDADE - BUBBLE SORT
    for(i = 0; i < TAM - 1; i++)          // Laço externo que passa por toda a lista
    {
        for(j = 0; j < TAM - i - 1; j++)  // Laço interno que compara os itens um ao lado do outro
        {
            if(idade[j] > idade[j + 1])   // Verificar se o item da esquerda é maior que o da direita
            {
                // Troca de valores
                temp = idade[j];         // Guarda o valor de idade[j]
                idade[j] = idade[j + 1];    // Coloca o valor de idade[j + 1] em idade[j]
                idade[j + 1] = temp;      // Coloca o valor guardado (de idade[j]) em idade[j + 1]
            }
        }
    }

    //IDADES ORDENADAS
    printf("\n Idades em ordem crescente: \n");
    for(i = 0; i < TAM; i++)
    {
        printf("\n %d \n ", idade[i]);
    }
        return 0;
}
