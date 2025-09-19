#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
   int i, valor, qtd=0, mult, soma;
   int vetor[MAX];
   float media;

   printf("Valor: \n");
   scanf("%d", &valor);
   //Só aceita valores >=0; valores negativos encerram o loop
   while(valor >= 0) {
      //Armazenar o valor dentro do vetor
      vetor[qtd] = valor;
      soma = soma + valor;
      qtd++;

      //proximo valor
      printf("valor: ");
      scanf("%d", &valor);
   }


   printf("Soma: %d\n", soma);
   media = (float)soma/qtd;

   printf("Valores maiores que a media (%f): \n", media);

   //Mostra conteúdo utilizado do vetor
   for(i=0; i<qtd; i++) {
      if(vetor[i] > media) {
         printf("%d ", vetor[i]);
      }
   }
}
