#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
   int i, valor, qtd=0, busca, vetor[MAX], achei=0;

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

   for(i=qtd-1; i>=0; i--) {
      if(vetor[i] == busca) {
         printf("Encontrei %d na posicao %d\n ", busca, i);
         achei = i; // variável flag
         break;
      }
   }
   if(achei == 1){
   printf("O valor encontrado %d nao foi encontrado.\n", busca);
   }else{
   printf("Encontrei %d na posicao %d \n", busca,achei);
   }
}
