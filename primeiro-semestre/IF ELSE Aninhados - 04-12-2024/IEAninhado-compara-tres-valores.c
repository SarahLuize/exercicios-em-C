#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    printf("Comparacao de tres valores\n");
    printf("Informe um numero: \n");
    scanf("%d", &A);

    printf("Informe o segundo numero: \n");
    scanf("%d", &B);

    printf("Informe o terceiro numero: \n");
    scanf("%d", &C);

    if (A>=B)
    {
        if (A>=C)
        {
            printf("Maior numero: %d\n", A);
        }
        else
        {
            printf("Maior numero: %d\n", C);
        }
    }
    else
    {

        if (B>=C)
        {
            printf("Maior numero: %d\n", B);
        }
        else
        {
            printf("Maior numero: %d\n", C);
        }
    }

    return 0;
}
