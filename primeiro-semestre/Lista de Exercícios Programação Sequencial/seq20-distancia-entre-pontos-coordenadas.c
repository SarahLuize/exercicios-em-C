#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, x2, y1, y2, distancia;

    printf("Coordenadas\n");

    printf("Insira coordenada X1: \n");
    scanf("%f", &x1);

     printf("Insira coordenada X2: \n");
    scanf("%f", &x2);

     printf("Insira coordenada Y1: \n");
    scanf("%f", &y1);

     printf("Insira coordenada Y2: \n");
    scanf("%f", &y2);

    //CALCULO


    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //RESULTADO

    printf("A distancia entre os pontos (%.0f, %.0f) e (%.0f, %.0f), igual a %.2f", x1, y1, x2, y2, distancia);

    return 0;
}
