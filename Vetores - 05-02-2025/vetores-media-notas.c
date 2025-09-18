#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/////////////^ Mudar pelo número de notas.

//VETORES. Conjunto de variáveis.

void main()
{
    int notas[TAM] = {100, 97, 88, 46};
    int i, soma = 0;

    for(i = 0; i < TAM; i++){
            soma += notas[i];
    }
     printf("\n A media das notas: %.2f \n", (float)soma/TAM);
}
