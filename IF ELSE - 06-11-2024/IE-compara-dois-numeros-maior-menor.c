#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2) {
        printf("Maior: %d, menor : %d", numero1, numero2);
    }
    else if (numero1 < numero2) {
        printf("Maior: %d, menor : %d", numero2, numero1);
    }
    else {
        printf("Os numeros são iguais");
    }

    return 0;
}
