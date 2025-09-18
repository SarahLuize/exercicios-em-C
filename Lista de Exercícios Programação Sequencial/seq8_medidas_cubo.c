#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lado, aface, atotal, perimetro, somaarestas, volume;


    //


    printf("Cálculo das medidas de um cubo\n");

    printf("Insira o lado do cubo: %d\n");
    scanf("%d", &lado);


    //CALCULO

    aface = lado*lado;
    atotal = lado*lado*6;
    perimetro = lado*4;
    somaarestas = lado*12;
    volume = lado*lado*lado;


    //RESULTADO

    printf("Area face: %d\n", aface);
    printf("Area total: %d\n", atotal);
    printf("Perimetro: %d\n", perimetro);
    printf("Soma das arestas: %d\n", somaarestas);
    printf("Volume do cubo : %d\n", volume);


    return 0;
}
