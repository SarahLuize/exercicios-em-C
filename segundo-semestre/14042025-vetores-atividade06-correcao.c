#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
   int i, valor, qtd=0, mult;
   int vetor[MAX];

   printf("Valor: \n");
   scanf("%d", &valor);
   //Só aceita valores >=0; valores negativos encerram o loop
   while(valor >= 0) {
      //Armazenar o valor dentro do vetor
      vetor[qtd] = valor;
      qtd++;

      //proximo valor
      printf("valor: ");
      scanf("%d", &valor);
   }

   printf("Voce quer os multiplos de? ");
   scanf("%d", &mult);

   //Mostra conteúdo utilizado do vetor
   for(i=0; i<qtd; i++) {
      if(vetor[i] % 3 == 0) {
         printf("%d \n", vetor[i]);
      }
   }

}
