#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define SalMinimo 1300.00

int main()
{
   //Lista exercicio - Atividade 17 - Calcule o imposto de renda de 10 contribuintes.
   //Exercícios mais fáceis : 16, 17, 20, 21, 22;

   int i, nCPF, nDependentes, contribuintes[TAM];
   float rendaMensal;

   printf("Calcular o imposto de renda\n");

   for(i = 0; i < TAM; i++) {
      printf("\n Informe o CPF: (apenas numeros) \n");
      scanf("%d", &nCPF);

      printf("Informe o numero de dependentes: ");
      scanf("%d", &nDependentes);

      printf("Informe a renda mensal: ");
      scanf("%f", &rendaMensal);
   }

   //CALCULO
   rendaMensal = rendaMensal- nDependentes * (5/100.0);

   if(rendaMensal < 2 * SalMinimo) { // Até 2 salários mínimos
      printf("Isento. %f", rendaMensal);
   }
   if(rendaMensal > 3 * SalMinimo) { // 2 a 3 salários mínimos
      rendaMensal = rendaMensal * (5/100.0);
      printf("5%% de aliquota . %f", rendaMensal);
   }
   if(rendaMensal > 4 * SalMinimo) { // 3 a 5 salários mínimos
      rendaMensal = rendaMensal * (10/100.0);
      printf("10%% de aliquota . %f", rendaMensal);
   }
   if(rendaMensal > 6 * SalMinimo) { // 5 a 7 salários mínimos
      rendaMensal = rendaMensal * (15/100.00);
      printf("15%% de aliquota . %f", rendaMensal);
   }
   if(rendaMensal > 7 * SalMinimo) { // Acima de 7 salários mínimos
      rendaMensal = rendaMensal * (20/100.00);
      printf("20%% de aliquota . %f", rendaMensal);
   }
   return 0;
}
