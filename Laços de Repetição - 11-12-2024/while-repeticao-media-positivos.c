#include <stdio.h>
#include <stdlib.h>

//La�o de repeti��o WHILE

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
    // Enquanto o usu�rio n�o digitar um valor maior do que 0 ou 0 fica repetindo.
// N�o contabiliza n�meros negativos, ent�o, a m�dia continua apenas n�s positivos.
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

        printf("A media dos numeros foi %.2f\n", (float)(somador/contador)); //D� para fazer c�lculos dentro do printf
    }
    else
    {
        printf("Nenhum valor foi digitado.\n");
    }
}
