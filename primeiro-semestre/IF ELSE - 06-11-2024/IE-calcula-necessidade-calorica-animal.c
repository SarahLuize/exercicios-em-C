#include <stdio.h>
#include <math.h>

float necessidade_calorica(char animal, char morada, float peso) {
float calorias = 70 * pow(peso, 0.75);

float fator;
  if (animal == 'C') {
    if (morada == 'D') {
    fator = 1.6;
        } else {
            fator = 1.8;
}

} else {
    if (morada == 'D') {
    fator = 1.2;
    } else {
        fator = 1.4;
    }
    }
        return calorias * fator;
}

int main()
{
    float calorias, peso;
    char animal, morada;

    printf("Informe o animal. (C) - Cachorro . (G) - Gato\n");
    scanf(" %c", &animal);

    printf("Informe a morada. (D) - Dentro . (F) - Fora\n");
    scanf(" %c", &morada);

    printf("Informe o peso do animal: \n");
    scanf("%f", &peso);

    calorias = necessidade_calorica(animal, morada, peso);

        printf("Seu animal precisa de %.f kCal por dia.\n", calorias);
}
