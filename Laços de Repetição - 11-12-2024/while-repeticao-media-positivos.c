#include <stdio.h>
#include <stdlib.h>

//Laço de repetição WHILE

void main()
{
    int valor;
    int contador = 0;
    int somador = 0;

    do
    {
        printf("%d) Digite um valor ou zero para sair: \n", contador+1);
        scanf("%d", &valor);
    }
    while (valor < 0);
    // Enquanto o usuário não digitar um valor maior do que 0 ou 0 fica repetindo.
// Não contabiliza números negativos, então, a média continua apenas nºs positivos.
    while(valor != 0)
    {
        contador++;
        somador += valor;
        // somador = somador + valor.

        do
        {
            printf("%d) Digite um numero ou zero para sair: \n", contador+1);
            scanf("%d", &valor);
        }
        while (valor < 0);
    }
    if(contador != 0)
    {

        printf("A qtde de numeros foi: %d\n", contador);

        printf("A media dos numeros foi %.2f\n", (float)(somador/contador)); //Dá para fazer cálculos dentro do printf
    }
    else
    {
        printf("Nenhum valor foi digitado.\n");
    }
}
