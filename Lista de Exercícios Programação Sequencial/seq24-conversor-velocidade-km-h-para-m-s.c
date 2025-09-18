#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vel_kmh, vel_ms;


    printf("Conversor de velocidades. KM/H -> M/S \n");

    printf("Insira o valor de velocidade por km/h: \n");
    scanf("%f", &vel_kmh);

    //calculo
    vel_ms =  vel_kmh / 3.6;

    //resultado
    printf("Velocidade em M/S : %.1f\n", vel_ms);


    return 0;
}
