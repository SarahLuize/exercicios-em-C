#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int main()
{
   char ent[max], saida[max];
   int i, j=0;
   printf("Informe uma string: \n");
   gets(ent);

   for(i=0; i<strlen(ent); i++) {
      if(ent[i] != 32) { //32 c�digo ascii do espa�o em branco
         saida[j] = ent[i];
         j++;      //se tiver espa�o, j n�o incrementa
      }
   }
   saida[j] = 0;
   printf("String saida: %s\n", saida);
}
