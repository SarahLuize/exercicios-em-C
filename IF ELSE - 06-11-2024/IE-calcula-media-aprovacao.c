#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Media aritmetica 3 notas\n");

    printf("Digite as 3 notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    //CALCULO
    media = (nota1+nota2+nota3)/3;

    media = (int)(media * 10 + 0.5) / 10.0;

   if (media >= 7) {
        printf("Nota: %.1f. APROVADO!\n", media);
    if (media >= 5 && media < 7) {
        printf("Nota: %.1f. EM EXAME!\n", media);
    } else {
        printf("Nota: %.1f. REPROVADO!\n", media);
    }
   }

    return 0;
}
