#include <stdio.h>
#include <stdlib.h>
#define max 200

int main()
{
    int vetor[max], i, qtd=0, valor, num, mul=0;

    printf("Digite um valor: \n");
    printf("Digite 0 para SAIR. \n");
    scanf("%d", &valor);

    while(valor != 0 )
    {
        vetor[qtd] = valor;
        qtd++;

        printf("Digite um valor: \n");
        scanf("%d", &valor);
    }

    printf("\n Multiplos de: ");
    scanf("%d", &mul);

    num = valor % mul;

    for(i=0; i<qtd; i++)
    {
        if(vetor[i] % mul == 0){
            printf("\n %d \n", vetor[i]);
        }
    }

    printf("Fim.");
}
