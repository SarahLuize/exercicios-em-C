#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i=0, soma=0, resultado;

    printf("Informe dois números: \n");
    scanf("%d %d", &x, &y);

    for(i = 0; i < y; i++){
        soma+= x;
    }

    resultado = soma;
    printf("Resultado de %d x %d: %d", x, y, resultado);
    return 0;
}
