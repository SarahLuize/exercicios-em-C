#include <stdio.h>
#include <stdlib.h>
#define max 10

int main()
{
   int vNumeros[max];
   int i, contImpar = 0, contPar = 0;

   printf("\n CONTAGEM DE NUMEROS IMPARES E PARES \n");

   printf("\n DIGITE 10 VALORES \n");

   for(i=0; i<max; i++){
      printf("\n Digite um valor: ");
      scanf("%d", &vNumeros[i]);
   }

   //VEFIFICAR SE É IMPAR OU PAR
   for(i=0; i<max; i++){

      if(vNumeros[i] % 2 == 0) {
         printf("\n %d : PAR \n", vNumeros[i]);
         contPar++;
      }
      else {
            printf("\n %d : IMPAR \n ", vNumeros[i]);
         contImpar++;
      }
   }

   //RESULTADOS
   printf("\n Qtd de numeros pares: %d\n", contPar);
   printf("\n Qtd de numeros impares: %d\n", contImpar);
}
