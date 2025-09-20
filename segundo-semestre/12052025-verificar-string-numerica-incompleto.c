#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int i, len, valor, soma=0, contNum=0;
   char string[50];

   printf("Verificar se a sring informada contem apenas numeros\n");
   printf("Digite uma string: \n");
   gets(string);
   len = strlen(string);

   for(i=0; i<len; i++) {
      if(string[i] >= '0' && string[i] <= '9') {
         contNum++;
      }
   }

   printf("String contem %d numeros\n", contNum);

   if(contNum == len) {
      printf("%s contem um numero inteiro.\n", string, contNum);
   }
   else {
      printf("% Não contem um numero valido.\n");
   }
}

//separar por centena, dezena, unidade. multiplicar 10^0 (1), 10^1 (10), 10^2 (100)... pelos numeros
//inverter string.
// potencia strlen -(menos) 1.
//multiplicar pelo valor do caractere menos 48
