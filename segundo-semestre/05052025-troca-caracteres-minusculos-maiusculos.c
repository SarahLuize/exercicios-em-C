#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int main()
{
   int i, sLen;
   char string[max];
    printf("Troca caracteres minusculos -> maiusculos\n");
    gets(string);
    // letras maiusculas e minusculas na tabela ascii tem diferença de 32.

    sLen = strlen(string);

    for(i=0; i<sLen; i++){
      if(string[i] >= 97 && string[i] <= 122){ //ou string[i] >= 'a' && string[i] <='z'
         string[i] = string[i]-32;
      }
    }
    printf("string maiuscula: %s", string);
}
