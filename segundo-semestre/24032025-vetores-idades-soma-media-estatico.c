#include <stdio.h>
#include <stdlib.h>
#define qtd 7

int main()
{
   int vIdade[qtd] = {25, 24, 29, 27, 19, 27, 24};
   int i;
   int soma = 0;
   float media;

   for(i=0; i<qtd; i++) {
      printf("[%d] = %d\n", i, vIdade[i]);
      soma = soma + vIdade[i]; //acumulador
   }

   printf("soma = %d\n", soma);
      media = (float)soma / qtd;
   printf("media = %f\n", media);
}
