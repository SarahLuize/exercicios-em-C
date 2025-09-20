#include <stdio.h>

int main(){
   char s1[20], s2[20];

   fflush(stdin);
   printf("s1: ");
   gets(s1);
   fflush(stdin);
   printf("s2: ");
   gets(s2);

   if (strcmp(s1,s2)==0) {
      printf("Strings iguais");
   }
   else if (strcmp(s1,s2)<0) {
      printf("s1 é menor que s2\n");
   }
   else {
      printf("s1 é maior que s2\n");
   }
}
