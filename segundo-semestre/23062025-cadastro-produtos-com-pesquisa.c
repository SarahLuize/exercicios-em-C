#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   int cod;
   char desc[50];
   float qtde;
   float val_unit;
} tProduto;


int pedeOpcao()
{
   int opcao;
   system("cls");
   printf("Menu Principal\n");
   printf("1 - Incluir\n");
   printf("2 - Listar\n");
   printf("3 - Pesquisar\n");
   printf("9 - Sair\n");
   printf("Tecle opcao\n");
   scanf("%d", &opcao);
   return opcao;
}

//Que parâmetros são necessários para incluir um produto?
int incluirProduto(tProduto *vProd, int contProd){
    //loop entrada dos dados
   printf("Codigo....: ");
   scanf("%d", &vProd[contProd].cod);
   if (vProd[contProd].cod > 0) {
      printf("Desc......: ");
      fflush(stdin);
      gets(vProd[contProd].desc);
      strupr(vProd[contProd].desc); // converter para maiuscula
      printf("Qtde......: ");
      scanf("%f", &vProd[contProd].qtde);
      printf("Val. Unit.: ");
      scanf("%f", &vProd[contProd].val_unit);
      contProd++;
   }
   return contProd;
}

//Que parâmetros são necessários para listar um produto?
int listarProdutos(tProduto *vProd, int contProd){
   //Mostrar produtos
   int temp[50];
   printf("+------+----------------------+---------+---------+---------+\n");
   printf("| Cod  | Descricao........... |   Qtde  | V. Unit | V.Total |\n");
   printf("+------+----------------------+---------+---------+---------+\n");

   float fTotalGeral = 0;
   for(int i=0;i<contProd; i++) {
      fTotalGeral += vProd[i].qtde * vProd[i].val_unit;
      printf("| %4d | %-20s | %7.2f | %7.2f | %7.2f |\n", vProd[i].cod, strncpy(temp, vProd[i].desc, 20), vProd[i].qtde,  vProd[i].val_unit, (vProd[i].qtde * vProd[i].val_unit));
   }

   printf("+------+----------------------+---------+---------+---------+\n");
   printf("| %3d Produtos..................................... %7.2f |\n", contProd, fTotalGeral);
   printf("+-----------------------------------------------------------+\n");
}

pesquisarProdutos(tProduto *vProd, int contProd){
   int cont = 0;
   char termo[50];
   printf("Informe o termo de busca: ");
   fflush(stdin);
   gets(termo);
   strupr(termo);
   for(int i=0; i<contProd; i++){
      if(strstr(vProd[i].desc, termo) != NULL){
         printf("Achou %s\n", vProd[i].desc);
         cont++;
      }
   }
   printf("%d produtos encontrados\n\n", cont);
}

int main()
{
   int contProd = 0, i, opcao;
   tProduto vProd[40];

   opcao = pedeOpcao();
   while (opcao != 9) {
      switch (opcao) {
      case 1:
         printf("Inclusao.\n");
         contProd = incluirProduto(vProd, contProd);
         printf("Total %d\n", contProd);
         break;
      case 2:
         printf("Listar.\n");
         listarProdutos(vProd, contProd);
         printf("Total %d\n", contProd);
         break;
      case 3:
         printf("Pesquisar.\n");
         pesquisarProdutos(vProd, contProd);
         break;
      default:
         printf("Opcao Invalida.\n\n");
      }
      Sleep(2000);

      opcao = pedeOpcao();
   }
}
