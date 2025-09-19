#include <stdio.h>
#include <stdlib.h>

//VETORES. Conjunto de variáveis.

void main()
{

    int i;
    float salario[10];
    float media = 0, menor = 0, maior = 0;

    fflush(stdin);
    printf("Digite o 1 o salario: ");
    scanf("%f", &salario[0]);

    menor = maior = salario[0];
    media += salario[0];

    for(i = 1; i < 10; i++)
    {
        fflush(stdin);
        printf("Digite o %d o salario: ", i+1);
        scanf("%f", &salario[i]);

        media += salario[i];

        if (salario[i] < menor)
        {
            menor = salario[i];
        }

        if(salario[i] > maior)
        {
            maior = salario[i];
        }

    }

    media /= 10;

    //SAÍDA

    printf("\n Media salarial: %.2f", media);

    printf("\n Salários maiores que a media:\n");

    for(i = 0; i < 10; i++)
    {
        if(salario[i] > media)
        {
            printf("\n %.2f\n", salario[i]);
        }
    }
}

