#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d : Positivo", numero);
    }
    else if (numero < 0) {
        printf("%d : Negativo", numero);
    }
    else {
        printf("%d : Zero", numero);
    }

    return 0;
}
