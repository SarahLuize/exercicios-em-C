#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   int cod;
   char desc[50];
   float qtde;
   float val_unit;
} tProduto;

int main()
{
   int qProd = 0, i;
   tProduto vProd[40];
   char temp[50];

   printf("Inclusao de Produtos\n");

   //loop entrada dos dados

   printf("Codigo....: ");
   scanf("%d", &vProd[qProd].cod);
   while(vProd[qProd].cod > 0) {
      printf("Desc......: ");
      fflush(stdin);
      gets(vProd[qProd].desc);
      printf("Qtde......: ");
      scanf("%f", &vProd[qProd].qtde);
      printf("Val. Unit.: ");
      scanf("%f", &vProd[qProd].val_unit);
      qProd++;

      printf("Codigo....: ");
      scanf("%d", &vProd[qProd].cod);
   }

   printf("+------+----------------------+---------+---------+---------+\n");
   printf("| Cod  | Descricao........... |   Qtde  | V. Unit | V.Total |\n");
   printf("+------+----------------------+---------+---------+---------+\n");

   float fTotalGeral = 0;
   for(i=0; i<qProd; i++) {
      fTotalGeral += vProd[i].qtde * vProd[i].val_unit;
      printf("| %4d | %-20s | %7.2f | %7.2f | %7.2f |\n", vProd[i].cod, strncpy(temp, vProd[i].desc, 20), vProd[i].qtde,  vProd[i].val_unit, (vProd[i].qtde * vProd[i].val_unit));
   }

   printf("+------+----------------------+---------+---------+---------+\n");
   printf("| %3d Produtos..................................... %7.2f |\n", qProd, fTotalGeral);
   printf("+-----------------------------------------------------------+\n");
}
