#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
   int i, valor, qtd=0, busca, vetor[MAX], cont=0;

   printf("Valor: [%d]\n", qtd);
   scanf("%d", &valor);
   while(valor >= 0) {
      vetor[qtd] = valor;
      qtd++;

      printf("valor: [%d]\n", qtd);
      scanf("%d", &valor);
   }

   printf("Quem voce quer buscar? \n");
   scanf("%d", &busca);

   for(i=0; i<qtd; i++) {
      if(vetor[i] == busca) {
         printf("Encontrei %d na posicao %d\n ", busca, i);
         cont++;
      }
   }
   printf("O valor encontrado %d foi encontrado %d vezes\n", busca,cont);
}
