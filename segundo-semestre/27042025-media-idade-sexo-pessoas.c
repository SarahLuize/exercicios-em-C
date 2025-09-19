#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
    int i, idade, pessoas=0, cont=0, contF=0, contM=0, idadeF=0, idadeM=0, vetorIdade[MAX];
    float mediaF, mediaM;
    char sexo;

    printf("Informe a quantidade de pessoas: \n");
    scanf("%d", &pessoas);

    for(i=0; i<pessoas; i++)
    {
        printf("Idade %d : \n", i+1);
        scanf("%d", &idade);

        vetorIdade[i] = idade;

        printf("Sexo %d (Digite F ou M): \n", i+1);
        scanf(" %c", &sexo);

        if(idade && sexo == 'F' || sexo == 'f')
        {
            contF++;
            idadeF += idade;
        }
        if(idade && sexo == 'M' || sexo == 'm')
        {
            contM++;
            idadeM += idade;
        }
    }

    //MEDIA

    mediaF = (float)idadeF/contF;
    mediaM = (float)idadeM/contM;

    printf("\n-----MEDIA-----\n");
    printf("Media F: %.2f\n", mediaF);
    printf("Media M: %.2f\n", mediaM);
}
