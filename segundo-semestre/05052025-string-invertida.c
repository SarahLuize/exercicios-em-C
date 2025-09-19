#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

int main()
{
   int i, j, sLen;
   char string[max], stringInv[max];
   memset(stringInv, 0, 100); //  zerar a stringInv

   printf("String invertida\n");
   printf("Digite algo (Limite 100 caracteres): \n");
   gets(string);

   sLen = strlen(string);
   printf("%d\n", sLen);

   // inverter string com um indice

   // for(i= sLen-1; i>=0; i--){
      // printf("%s", string[i]);
   // }

   // inverter string com dois indices

   j=0;
   for(i= sLen-1; i>=0; i--){
      stringInv[j] = string[i];
      j++;

   }
      printf("%s", stringInv);
}
