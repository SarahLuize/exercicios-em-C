#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numeros_multiplos(int A, int B){
   int resultado;
   resultado = (A / B);
   if(A % B == 0) {
      resultado = 1; // true
   }
   if(A % B != 0){
      resultado = 0; // false
   }
   if(B % A == 0){
      resultado = 1; // true
   }
   if(B % A != 0){
      resultado = 0; // false
   }
   return resultado;
}

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int num1, num2;
   int resultado;

   printf("Números múltiplos entre si \n");

   printf("Informe dois numeros: \n");
   scanf("%d %d", &num1, &num2);

   resultado = numeros_multiplos(num1, num2);

   if(resultado == 1){
      printf("%d é múltiplo de %d", num1, num2);
   }
   if(resultado == 0){
      printf("%d não é múltiplo de %d", num1, num2);
   }
}
