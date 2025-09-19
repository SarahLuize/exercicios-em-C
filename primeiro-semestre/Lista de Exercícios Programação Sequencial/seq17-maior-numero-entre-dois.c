#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y, maiorxy;

    printf("Determinar numero maior\n");

    printf("Digite o valor X: \n");
    scanf("%d", &x);

    printf("Digite o valor de Y: \n");
    scanf("%d", &y);

    //CALCULOS

    maiorxy = (x + y + abs ( x-y))/2;

    //RESULTADOS


    printf("O maior valor entre %d e %d; %d\n", x, y ,maiorxy);



    return 0;
}
