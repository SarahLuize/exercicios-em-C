#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificarNumero(char *str)
{
   int len = strlen(str);
   for (int i=0; i<len; i++) {
      if (str[i]<'0'  ||  str[i]>'9') {
         return 0;//0=invalido
      }
   }
   return 1;//1=valido
}

int calcula_dv(char *s){
   int peso, dv, soma=0;
   peso = strlen(s);
   for(int i=0; i<strlen(s); i++) {
      soma+=(s[i]-48) *peso;
      peso--;
   }
   dv = soma % 7;
   return dv;
}

int main()
{
   char string[15];
   int dv;
   printf("Digito Verificador\n");
   printf("Informe um numero: \n");
   gets(string);

   if (!verificarNumero(string)) {
      printf("Numero invalido\n");
      return -1;
   }
   dv = calcula_dv(string);
   printf("DV: %d\n", dv);
}
