#include <stdio.h>
#include <stdlib.h>

int main()
{

   int nota, soma = 0, cont = 0; // vari�vel de controle
   float media;

   printf("Digite uma nota: \n"); //valor inicial
   scanf("%d", &nota);

   while(nota != 0){
      cont++;
      soma = soma + nota; // acumulador/somador

      printf("Digite uma nota: \n");
      scanf("%d", &nota); // pr�xima nota/novo valor

   }

   media = (float)soma / cont;
   printf("cont: %d\n", cont);
   printf("soma: %d\n", soma);
   printf("media: %.2f\n", media);
}
