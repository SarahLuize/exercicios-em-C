#include <stdio.h>
#include <stdlib.h>

typedef struct {
   int codigo;
   char descricao[50];
   float preco;
   int qtd_estoque;
} tProduto;

int main()
{
   //Incluir coluna extra. Preco total = preco * qtd_estoque.

   tProduto vProduto[50];
   int qtd=0, i;

   printf("Cadastro de produtos.\n");
   printf("Digite o codigo do produto : \n");
   scanf("%d", &vProduto[qtd].codigo);

   while(vProduto[qtd].codigo > 0) {

      printf("Descricao: ");
      fflush(stdin);
      gets(vProduto[qtd].descricao);

      printf("Preco: ");
      scanf("%f", &vProduto[qtd].preco);

      printf("Qtde. Estoque: ");
      scanf("%d", &vProduto[qtd].qtd_estoque);
      qtd++;

      printf("Digite o codigo do produto : \n");
      scanf("%d", &vProduto[qtd].codigo);
   }

   printf("LISTAGEM\n");
   for(i=0; i<qtd; i++){
   printf("+------------------------------------------------------------+\n");
   printf("|  COD  | Descricao........... |  QTD  | Preco und |  Total  |\n");
   printf("|  %4d | %-20s | %4d  |   %4.2f    | %6.2f  |", vProduto[i].codigo, vProduto[i].descricao, vProduto[i].qtd_estoque, vProduto[i].preco, (vProduto[i].qtd_estoque * vProduto[i].preco));
   printf("+------------------------------------------------------------+\n");
   }
}
