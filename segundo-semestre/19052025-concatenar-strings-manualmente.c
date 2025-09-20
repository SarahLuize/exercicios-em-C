#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

int main()
{
   char string1[max], string2[max], stringFinal[40];
   int len, i, j=0;

    printf("Informe uma string (Maximo 20 caracteres) : \n");
    gets(string1);
    printf("Informe outra string (Maximo 20 caracteres) : \n");
    gets(string2);

    for(i=0; string1[i]!='\0'; i++);

    for(j=0; string2[j]!='\0'; j++){
      string1[i] = string1[i] + string2[j];
      i++;
    }
    string1[i]='\0';
    printf("String concatenada: %s", string1);
}
