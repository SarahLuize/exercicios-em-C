#include <stdio.h>
#include <stdlib.h>
#define TAM 15

//Atividade - Apresentar valores pares

void main()
{
    int i, valores[TAM];

    for(i = 0; i < TAM; i++){
        printf("\n Entre com o valor %d : \n", i+1);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < TAM; i++){
            if(valores[i] %2 == 0){ //Verifica se é par
                printf("\n %d \n", valores[i]);
            }
    }

    return 0;
}
