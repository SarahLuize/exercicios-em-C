#include <stdio.h>
#include <stdlib.h>

void main()
{
    int valor;
    int menor = 2147483647;
    int maior = -2147483647;

    printf("Digite um numero ou -1 para sair\n");
    scanf("%d", &valor);

    while(valor != -1)
    {
        if(valor < menor)
        {
            menor = valor;
        }
        if(valor > maior)
        {
            maior = valor;
        }
        printf("Digite um numero ou -1 para sair\n");
        scanf("%d", &valor);
    }

    printf("\nMaior : %d . Menor : %d\n", maior, menor);
    return 0;
}
