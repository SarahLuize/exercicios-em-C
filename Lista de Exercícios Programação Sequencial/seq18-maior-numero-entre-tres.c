#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z, maiorxy, maiorxyz;

    printf("Determinar numero maior de 3 numeros\n");

    printf("Digite o valor de X: \n");
    scanf("%d", &x);

    printf("Digite o valor de Y: \n");
    scanf("%d", &y);

    printf("Digite o valor de Z: \n");
    scanf("%d", &z);


    //CALCULO

    maiorxy = (x + y + abs (x-y))/2;
    maiorxyz = (maiorxy + z + abs(maiorxy -z))/2;

    //RESULTADO

    printf("O maior valor entre %d, %d e %d; %d\n", x, y, z,maiorxyz);


    return 0;
}
