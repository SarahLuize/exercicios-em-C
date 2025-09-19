#include <stdio.h>
#include <stdlib.h>

float calc_area_retangulo(float larg, float comp){
   float area;
   area = comp * larg;
   return area;
}

int main()
{
   float larg, comp, area;

    printf("Calculo da Area do Terreno\n");
    printf("\n Informe a largura: ");
    scanf("%f", &larg);
    printf("\n Informe o comprimento: ");
    scanf("%f", &comp);

    area = calc_area_retangulo(larg, comp);

    printf("\n Area = %.2f", area);
}
