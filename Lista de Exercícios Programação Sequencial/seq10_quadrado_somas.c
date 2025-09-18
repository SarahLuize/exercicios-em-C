#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, resultado, quadrado_da_soma, soma_do_quadrado;

    printf("Insira valor1\n");
    scanf("%d", &valor1);

    printf("Insira valor2\n");
    scanf("%d", &valor2);

    //calculo

    resultado = valor1+valor2;
    quadrado_da_soma = resultado*resultado;
    soma_do_quadrado = valor1*valor1 + valor2*valor2;


    //resultado



    printf("Quadrado da soma: %d\n", quadrado_da_soma);
    printf("Soma dos quadrados: %d\n", soma_do_quadrado);



    return 0;
}
