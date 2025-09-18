#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, vetor_original[30], vetor_resultado[30];

    printf("Digite %d o numero: ", i+1);
    scanf("%d", &vetor_original[0]);

    for(i = 1; i < 30; i++)
    {
        printf("Digite %d numero: ", i + 1);
        scanf("%d", &vetor_original[i]);
    }

    //CALCULO

    for(i = 0; i < 30; i++)
    {
        if(i % 2 == 0)
        {
            vetor_resultado[i] = vetor_original[i] *2;
        }
        else
        {
            vetor_resultado[i] = vetor_original[i] *3;
        }
    }

    //SAÍDA

    printf("\n RESULTADO \n");

    for(i = 0; i < 30; i++)
    {
        printf("\n %d : %d \n", i+1, vetor_resultado[i]);

    }

    return 0;
}
