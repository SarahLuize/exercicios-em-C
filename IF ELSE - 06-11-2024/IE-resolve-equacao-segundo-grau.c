#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, Delta, x1, x2;
    printf("Equacao do segundo grau\n");
    printf("Informe A, B, C: \n");
    scanf("%d %d %d", &A, &B, &C);

    //CALCULO

    Delta = pow(B, 2) - (4*A*C);


    if (Delta < 0)
    {
        printf("A equacao nao possui raizes reais.");
    }
    else
    {
        if (delta == 0)
        {
            x1 = -B / (2.0 * A);
            printf("Delta = %d . Raizes da equacao : x1 = %d, x2 = %d", Delta, x1, x2);

        }
        else
        {
            x1 = (-B - sqrt(Delta))/ (2*A);
            x2 = (-B + sqrt(Delta))/ (2*A);
            printf("Delta = %d . Raizes da equacao : x1 = %d, x2 = %d", Delta, x1, x2);
        }
    }
    return 0;
}
