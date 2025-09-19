#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int i, valor=0, qtd=0, vetor[MAX];

    printf("Digite um numero entre 3 e 7 ou 0 para encerrar.\n");
    printf("\nNumero: \n");
    scanf("%d", &valor);

    while(valor != 0)
    {
        vetor[qtd] = valor;
        qtd++;

        if(valor >=3 && valor <= 7){
            printf("Ok! \n\n");
        }else{
            printf("Err.. \n\n");
        }

        printf("Numero: \n");
        scanf("%d", &valor);
    }
    printf("Vetor: ");
    for(i=0; i<qtd; i++){
        printf("%d ", vetor[i]);
    }
}
