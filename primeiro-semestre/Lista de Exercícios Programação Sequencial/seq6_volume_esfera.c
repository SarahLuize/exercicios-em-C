#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diametro, raio;
    float volume;

    printf("Insira o valor do diametro: \n");
    scanf("%d", &diametro);


    raio = diametro / 2;

    volume =  4 * 3.141592 * pow(raio, 3) /3;


    printf("volume: %.9f",volume);





    return 0;
}
