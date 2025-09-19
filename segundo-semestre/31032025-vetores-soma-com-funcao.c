#include <stdio.h>
#include <stdlib.h>
#define max 5

void imprimeVetor(int *vetor, int qtd){
int i;
for(i=0; i<qtd; i++){
   printf("%2d, ", vetor[i]);
}
printf("\n");
}

int main()
{
   int vetor1[max], vetor2[max], vSoma[max], i;

    printf("SOMA DE VETORES\n");

   //PRIMEIRO VETOR
   for(i=0; i<max; i++){
      printf("\n Digite 5 valores: ");
      scanf("%d", &vetor1[i]);
   }

   //SEGUNDO VETOR
   for(i=0; i<max; i++){
      printf("\n Digite outros 5 valores: ");
      scanf("%d", &vetor2[i]);
   }

   //SOMA
   for(i=0; i<max; i++){
      vSoma[i] = vetor1[i] + vetor2[i];
   }

   //RESULTADO
   imprimeVetor(vetor1, max);
   imprimeVetor(vetor2, max);
   imprimeVetor(vSoma, max);
}
