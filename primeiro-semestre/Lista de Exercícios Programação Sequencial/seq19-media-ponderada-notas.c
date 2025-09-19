#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nota1, nota2, nota3, mediapond;

    printf("Calculo de media\n");

    printf("Insira primeira nota: \n");
    scanf("%f", &nota1);

    printf("Insira segunda nota: \n");
    scanf("%f", &nota2);

    printf("Insira terceira nota: \n");
    scanf("%f", &nota3);

    //CALCULO

    mediapond = (nota1 * 2.0 + nota2 * 3.0 + nota3 * 4.0) / (2.0 + 3.0 + 4.0);

    //RESULTADO

    printf("Resultado : %.1f\n", round(mediapond));


    return 0;
}
