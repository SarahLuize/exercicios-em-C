#include <stdio.h>
#include <stdlib.h>

int main()
{
   float notaPort, notaMat, media;
    char nome[20];

    printf("Informe seu nome: \n");
    scanf("%19s", nome);

    printf("Informe sua nota em português: \n");
    scanf("%f", &notaPort);

    printf("Informe sua nota em português: \n");
    scanf("%f", &notaMat);

    //calculo
    media = (notaPort + notaMat)/2.0;

    if (notaPort <6.0 || notaMat <6.0) {
        printf("%s , %.1f, REPROVADO!", nome, media);
    }
    else {
        printf("%s , %.1f, APROVADO!", nome, media);
    }


    return 0;
}
