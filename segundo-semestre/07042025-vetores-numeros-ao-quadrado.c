#include <stdio.h>
#include <stdlib.h>
#define max 100

//lição de casa: atividades 6, 7 e 8.
void mostraVetor(int *vetor, int qtd){
   for(int i=0; i<qtd; i++) {
      printf("\n%d\n", vetor[i]);
   }
   printf("\n");
}

int main()
{
   int vetor[max], vQuad[max];
   int valor, i, qtd = 0;

    printf("VETORES NUMEROS QUADRADOS\n");
    printf("DIGITE 0 (zero) PARA SAIR\n");

    printf("Digite um numero: \n");
    scanf("%d", &valor);

    while(valor != 0){
         vetor[qtd] = valor;
         qtd++;

         printf("Digite outro numero: \n");
         scanf("%d", &valor);
    }

    for(i=0; i<qtd; i++){
      vQuad[i] = pow(vetor[i],2);
    }

    mostraVetor(vQuad, qtd);
}
