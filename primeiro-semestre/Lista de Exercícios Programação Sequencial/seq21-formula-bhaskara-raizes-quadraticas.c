#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C, delta, x1, x2;

    printf("Formula de Bhaskara\n");

    printf("Delta = b ^ 2 - 4 * ac\n");

    //ENTRADA

    printf("Insira valor de A: \n");
    scanf("%f", &A);

    printf("Insira valor de B: \n");
    scanf("%f", &B);

    printf("Insira valor de C: \n");
    scanf("%f", &C);

    //CALCULOS

    delta = pow (B,2.0) - A*C *4.0;

    x1 = (-B + sqrt(delta)) / (2.0*A);

    x2 = (-B - sqrt(delta)) / (2.0*A);


    //RESULTADOS

    printf("Delta: %.f\n", delta);
    printf("X1: %.f\n", x1);
    printf("X2: %.f\n", x2);

    return 0;
}
