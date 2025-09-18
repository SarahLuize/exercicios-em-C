#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Lista exercicio - Atividade 02 - MDC
   //Exercícios mais fáceis : 16, 17, 20, 21, 22;
   int A, B, resto, maior, menor, mdc, mmc;

   printf("Digite um numero: \n");
   scanf("%d", &A);

   printf("Digite um numero: \n");
   scanf("%d", &B);

   if(A > B) {
      maior = A;
      menor = B;
   }
   else {
      maior = B;
      menor = A;
   }
   mdc = calcularMDC(menor, maior);
   printf("\n MDC: %d", mdc);

   mmc = abs(maior*menor)/mdc;
   printf("\n MMC: %d", mmc);
}

   int calcularMDC(menor, maior) {
   int resto;

   do {
      resto = maior % menor;
      if(resto == 0) {
         return menor; //MENOR É O MDC!
      }else {
         maior = menor;
         menor = resto;
      }
   } while(1);
}
