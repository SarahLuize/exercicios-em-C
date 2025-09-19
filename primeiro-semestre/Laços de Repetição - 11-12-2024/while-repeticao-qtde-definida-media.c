#include <stdio.h>
#include <stdlib.h>

void main()
{
    int qtdeNum, num;
    int contador = 0;
    int somador = 0;
    float media;

    printf("Informe a quantidade de numeros: \n");
    scanf("%d", &qtdeNum);

    do
    {
        printf("%d)Digite um numero: \n", contador+1);
        scanf("%d", &num);
        somador+=num;
        contador++;
    }
    while(contador < qtdeNum);


        printf("Quantidade de numeros digitados: %d\n", contador);
        printf("Soma dos numeros: %d\n", somador);
        printf("Media dos numeros: %.2f\n", (float)(somador/contador));

}
