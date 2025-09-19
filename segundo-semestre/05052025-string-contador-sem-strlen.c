#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int myStrlen (char *s1){
   cont=0;
   while(string[cont]!='\0'){
      cont++;
   }
   return cont;
}

int main()
{
   int i, cont=0;
   char string[max];
   memset(string, 0, 50);

   printf("Informe a string: \n");
   gets(string);

   //versão com for (ruim)
   //for(i=0; i<max; i++) {
   //   if(string[i] == '\0') {
   //      break;
   //   }
   //   cont++;
   //}
   //printf("%d", cont);

   //versão com while (melhor) utilizado na função
   //cont=0;
   //while(string[cont]!='\0'){
   //   cont++;
   //}
  // printf("cont bom %d\n", cont);

  cont = myStrlen(string);
  printf("cont ")
}
