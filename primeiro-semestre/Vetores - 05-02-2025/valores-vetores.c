#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main()
{
    int i, valores[TAM];

    for(i = 0; i < TAM; i++){
        printf("Digite um numero : \n");
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < TAM; i++){
        printf("\n %d \n", valores[i]);
    }
    return 0;
}
