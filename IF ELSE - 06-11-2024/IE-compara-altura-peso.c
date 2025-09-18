#include <stdio.h>
#include <stdlib.h>

float comparar_altura_peso(char pessoa1[], float altura1, int peso1, char pessoa2[], float altura2, int peso2) {

 //Altura

    if (altura1 > altura2) {
        printf("A pessoa mais alta é: %s\n", pessoa1);
    }
    else {
        printf("A pessoa mais alta é: %s\n", pessoa2);
    }

    //Peso

    if (peso1 > peso2) {
        printf("A pessoa mais leve é: %s\n", pessoa2);
    }
    else {
        printf("A pessoa mais leve é: %s\n", pessoa1);
    }
}

int main()
{
    char pessoa1[20], pessoa2[20];
    float altura1, altura2;
    int peso1, peso2;

    //Pessoa 1
    printf("Nome pessoa 1: \n");
    scanf("%19s", pessoa1);

    printf("Digite a altura: \n");
    scanf("%f", &altura1);

    printf("Digite o peso: \n");
    scanf("%d", &peso1);

    //Pessoa 2

    printf("Nome pessoa 2: \n");
    scanf("%19s", pessoa2);

    printf("Digite a altura: \n");
    scanf("%f", &altura2);

    printf("Digite o peso: \n");
    scanf("%d", &peso2);


    comparar_altura_peso(pessoa1, altura1, peso1, pessoa2, altura2, peso2);
return 0;
}
