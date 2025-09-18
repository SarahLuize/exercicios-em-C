#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Atividade 25 - AND
    int nota1, nota2, nota3, aulas, faltas, presenca, frequencia;
    float media;
    //MÉDIA
    printf("Informe tres notas: \n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    //FREQUÊNCIA
    printf("Informe a quantidade total de aulas\n");
    scanf("%d", &aulas);

    printf("Informe a quantidade de faltas\n");
    scanf("%d", &faltas);

    media = (nota1 + nota2 + nota3)/3.0;
    presenca = aulas - faltas;
    frequencia = (float)(presenca*100)/aulas;

    if (frequencia >=75.0 && media>=6.0){
    printf("APROVADO!\n");
    printf("Frequencia : %d . Media : %f\n", frequencia, media);

    }
    else
    {
        printf("REPROVADO!\n");
        printf("Frequencia : %d . Media : %f\n", frequencia, media);
    }

    return 0;
}
