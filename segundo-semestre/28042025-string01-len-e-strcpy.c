#include <stdio.h>

int main()
{
   int i;
   char nome[20] = "Instituto Federal";//17
   char nome2[20];
   printf("%s\n", nome);

   // determinar o comprimento da "string"
   int len = strlen(nome);
   printf("len %d\n", len);

   // passear pelos caracteres da string
   for (i=0; i<20; i++) {
      printf("%c %d\n", nome[i], nome[i]);
   }

   // strcpy
   strcpy(nome2, nome);  //nome2 = nome #erro
   printf("nome2 %s\n", nome2);
}
