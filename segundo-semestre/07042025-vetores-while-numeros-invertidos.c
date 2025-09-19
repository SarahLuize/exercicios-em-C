#include <stdio.h>
#include <stdlib.h>
#define max 100

void mostraVetor(int *vetor, int qtd){
   int i;
   for(i=0; i<qtd; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");
}

void mostraInvertido(int *vetor, int qtd){
   int i;
   for(i=qtd-1; i>=0; i--){
      printf("%d ", vetor[i]);
   }
   printf("\n");
}

int main()
{
    int valor;
    int vetor[max];
    int qtd = 0;

    printf("LISTA DE VALORES\n");
    printf("DIGITE -1 PARA SAIR! \n");

    printf("Informe um valor: \n");
   scanf("%d", &valor); // valor inicial

    while(valor != -1) // condição de permanência.
    {
       // incluir o valor no vetor
       vetor[qtd] = valor;
       // incrementar a quantidade/contador
       qtd++;

        printf("Outro valor: \n");
        scanf("%d", &valor); // mudança de valor
    }
    printf("\n Vetor normal: \n");
    mostraVetor(vetor, qtd);
    printf("\n Vetor invertido: \n");
    mostraInvertido(vetor, qtd);

}
