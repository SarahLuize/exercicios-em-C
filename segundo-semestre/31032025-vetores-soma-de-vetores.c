#include <stdio.h>
#include <stdlib.h>
#define max 5

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
   for(i=0; i<max; i++){
      printf("\n Soma: %3d", vSoma[i]);
   }

}
