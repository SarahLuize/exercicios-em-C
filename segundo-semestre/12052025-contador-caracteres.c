#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int main()
{
   int i, len, contVogais=0, contEspacos=0;
   char string[max];

   printf("Contador de caracteres.\n");
   printf("Digite uma string: \n");
   gets(string);

   len = strlen(string);

   for(i=0; i<len; i++) {
      //contar espaços
      if(string[i] == ' ') {
         contEspacos++;
      }

      if(string[i] >= 'a' && string[i] <= 'z') {
         string[i] = string[i] -32;
      }

      //contar vogais
      if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
         contVogais++;
      }
   }
   printf("Contagem de caracteres: %d\n", len - contEspacos);
   printf("Contagem de vogais: %d\n", contVogais);
   printf("Contagem de espaços em branco: %d\n", contEspacos);
   printf("string: %s\n", string);
}
