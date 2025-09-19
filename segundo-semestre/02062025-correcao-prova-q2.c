#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CORREÇÃO PROVA QUESTÃO 2
int main()
{
   char string[20];
   int i, j, len, palindromo=1;

   printf("string: ");
   gets(string1);
   len = strlen(string);

   //criar string nova invertida
   //for(i=0; i<len; i++){
   //      inv[i] = string[len-i-1];
   //}

   //ou
   j= len-1;
   for(i=len-1; i>=0; i--){
       inv[len-1-i] = string[i];
   }

   j = len-1;
   for(i=0; i<len; i++){
      printf("[%d] = %c . [%d] = %c", i, string, j, string);
      if(string[i]!= string[j]){
         palindromo = 0; //0: falso
      }
      j--;
   }
   if(palindromo == 1){
         printf("Palindromo\n");
   }
   else{
      printf("Nao palindromo");
   }

}
