#include <stdio.h>
#include <stdlib.h>
#define max 10

int main()
{
    int i, valor1=0, valor2=1, resultado=0, vetor[max];

    printf("10 primeiros valores da serie de Fibonacci.\n");

    vetor[0] = valor1;
    vetor[1] = valor2;

    for(i=2; i<max; i++)
    {
        resultado = valor1 + valor2;
        //x = 0 + 1

        vetor[i] = resultado;

        valor1 = valor2;
        //valor1 = 1;
        valor2 = resultado;
        //valor2 = 1;
    }

    printf("vetor: ");
    for(i=0; i<max; i++)
    {
        printf("%d ",vetor[i]);
    }
}
