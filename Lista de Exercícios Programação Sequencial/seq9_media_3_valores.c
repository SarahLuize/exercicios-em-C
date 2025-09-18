#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor1, valor2, valor3;
    float media;

    printf("Media aritmetica\n");
    printf("Insira valor 1: \n");
    scanf("%d", &valor1);

    printf("Insira valor 2: \n");
    scanf("%d", &valor2);

    printf("Insira valor 3: \n");
    scanf("%d", &valor3);

    //calculo

    media = (valor1+valor2+valor3) /3.0;


    //resultado


    printf("Resultado da media aritmetica: %.2f\n", media);




    return 0;
}
