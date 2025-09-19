#include <stdio.h>
#include <stdlib.h>
#define TAM 30

int main()
{
    int i, j, temp;
    int vetor_num[TAM], vetor_invertido[TAM];

    printf("Vetor normal \n");

    for(i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor_num[i]);
    }

    //ORDEM INVERTIDA

    for(i = 0; i < TAM; i++){
        vetor_invertido[i] = vetor_num[TAM -1 -i];

    }

    printf("\n Vetor invertido \n");
    for(i = 0; i < TAM; i++){
    printf("\n %d \n", vetor_invertido[i]);
    }
    return 0;
}
