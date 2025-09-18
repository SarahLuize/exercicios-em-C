#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   //Lista exercicio - Atividade 16 - Listar código empresa com maiores recursos humanos.
   //Exercícios mais fáceis : 16, 17, 20, 21, 22;

   int i, cont, codigo, nFuncionarios;
   char empresa;

   do {
      fflush(stdin);
      printf("Digite o codigo da empresa\n");
      printf("Digite 0 para sair\n");
      scanf("%d", &codigo);

      if(codigo != 0){
         fflush(stdin);
         printf("Digite a quantidade de funcionarios: \n");
         scanf("%d", &nFuncionarios);

         fflush(stdin);
         printf("Digite a categoria da empresa: \n");
         printf("(G) - Grande \n");
         printf("(M) - Media\n");
         printf("(P) - Pequena\n");
         printf("(C) - Microempresa\n");
         scanf("%c", &empresa);

         switch(empresa) {
         case 'G':
            printf("\n %d - | Codigo: %d | Numero de funcionarios: %d | Porte empresa: %c\n", cont++, codigo, nFuncionarios, empresa);
            break;

         case 'M':
            printf("\n %d - |Codigo: %d | Numero de funcionarios: %d | Porte empresa: %c\n", cont++, codigo, nFuncionarios, empresa);
            break;

         case 'P':
            printf("\n %d - |Codigo: %d | Numero de funcionarios: %d | Porte empresa: %c\n", cont++, codigo, nFuncionarios, empresa);
            break;

         case 'C':
            printf("\n %d - | Codigo: %d | Numero de funcionarios: %d | Porte empresa: %c\n", cont++, codigo, nFuncionarios, empresa);
            break;

         default:
            printf("\n Opcao invalida. \n");
            break;
         }
      }
   }
   while(codigo != 0);

}
