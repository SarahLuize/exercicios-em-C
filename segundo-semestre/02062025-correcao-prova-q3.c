#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CORREÇÃO PROVA QUESTÃO 3
int main()
{
   char string[20];
   int i, len;

   printf("string: ");
   gets(string);
   len = strlen(string);

   for(i=1; i<strlen(string); i++){
      string[i-1] = string[i];
   }
   string[len-1]=0;

   printf("string: %s\n", string);
}
