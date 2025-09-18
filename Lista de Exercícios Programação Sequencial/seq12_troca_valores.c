#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor1, valor2;

   //Troca de valores

    printf("Insira valor 1: \n");
    scanf("%d", &valor1);

    printf("Insira valor 2: \n");
    scanf("%d", &valor2);


    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;


    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);


    return 0;
}
