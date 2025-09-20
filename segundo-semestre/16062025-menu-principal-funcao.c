#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pedeOpcao()
{
   int opcao;
   system("cls");
   printf("Menu Principal\n");
   printf("1 - Incluir\n");
   printf("2 - Listar\n");
   printf("9 - Sair\n");
   printf("Tecle opcao\n");
   scanf("%d", &opcao);
   return opcao;
}

int main()
{
   int opcao;

   opcao = pedeOpcao();
   while (opcao != 9) {
      switch (opcao) {
      case 1:
         printf("Inclusao.\n\n");
         break;
      case 2:
         printf("Listar.\n\n");
         break;
      default:
         printf("Opcao Invalida.\n\n");
      }
      Sleep(2000);

      opcao = pedeOpcao();
   }
}
