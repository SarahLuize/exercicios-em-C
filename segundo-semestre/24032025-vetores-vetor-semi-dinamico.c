#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
   int vIdade[MAX]; //reservar espaço na memória
   int qtd, i, soma = 0;
   float media;

    printf("Quantos valores? (max 100)\n");
    scanf("%d", &qtd);

    if(qtd>100 || qtd<0){
      printf("Valor invalido\n");
      return 0;
    }

   for(i=0; i<qtd; i++) {
      printf("Informe a idade: ");
      scanf("%d", &vIdade[i]);
      soma = soma + vIdade[i];
   }

   for(i=0; i<qtd; i++) {
      printf("%d ", vIdade[i]);
   }

   printf("\n Soma = %d \n", soma);

   //Calcular e mostrar a media
   media = (float)soma / qtd;
   printf("\n Media = %.1f \n", media);

   printf("Idades que estao acima da media: \n");

   for(i=0; i<qtd; i++) {
      if (vIdade[i] > media) {
         printf("%d ", vIdade[i]);
      }
   }
}
