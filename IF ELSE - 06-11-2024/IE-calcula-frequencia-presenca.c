#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aulas, faltas, presenca;
    float frequencia;

    printf("Informe a quantidade de aulas: \n");
    scanf("%d", &aulas);

    printf("Informe a quantidade de faltas: \n");
    scanf("%d", &faltas);

    //calculo

    presenca = aulas - faltas;
    frequencia = (float)(presenca*100)/aulas;

    printf("Presenca: %d\n", presenca);
    printf("Frequencia: %.2f\n", frequencia);

    if(frequencia >= 75) {
        printf("Suficiente");
    }
    else {
        printf("Insuficiente");
    }

    return 0;
}
