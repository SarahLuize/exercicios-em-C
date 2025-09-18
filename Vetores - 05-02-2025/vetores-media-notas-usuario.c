#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5
/////////////^ Mudar pelo número de notas.

//VETORES. Conjunto de variáveis.

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int notas[TAM];
    int i, soma = 0;

    for(i = 0; i < TAM; i++){
        printf("Entre com a %d° nota:", i+1);
        scanf("%d", &notas[i]);
    }

    for(i = 0; i < TAM; i++){
            soma += notas[i];
    }
     printf("\n A media das notas: %.2f \n", (float)soma/TAM);

}
