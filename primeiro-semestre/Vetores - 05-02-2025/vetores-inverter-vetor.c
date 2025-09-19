#include <stdio.h>
#include <stdlib.h>
#define TAM 5

//Atividade - Vetor invertido

void main()
{
    int vetorOriginal[TAM], vetorInvertido[TAM];
    int i, j;

    //Recebe os valores do vetor
    for(i = 0; i < TAM; i++){
    printf("Digite o %d numero: \n", i+1);
    scanf("%d", &vetorOriginal[i]);
    }

    for(i = 0, j = TAM - 1; i < TAM; i++, j--){
        vetorInvertido[j] = vetorOriginal[i];
    }

    //Imprimir os vetores
    for(i = 0; i < TAM; i++){
    printf(" \n %d \n ", vetorInvertido[i]);
    }
}
