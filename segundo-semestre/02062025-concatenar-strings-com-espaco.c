#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CORREÇÃO PROVA QUESTÃO 1
int main()
{
   char string1[20], string2[20], novaString[40];
   int i, len_s1, len_s2;

    printf("string 1: ");
    gets(string1);
    printf("string 2: ");
    gets(string2);

    len_s1 = strlen(string1);
    len_s2 = strlen(string2);

    for(i=0; i<strlen(string1); i++){
      novaString[i] = string1[i];
    }

    printf("len s1: %d\n", len_s1);
    printf("len s2: %d\n", len_s2);
      //ADD espaço em branco
    novaString[len_s1] = ' ';

    j=len_s1+1;
    for(i=0; i<len_s2; i++){
      novaString[j+i] = string2[i];
    }

    //caracter de fim de string
    novaString[len_s1+len_s2+1] = 0;
    printf("final: %s\n", novaString);

    printf("fim\n");
}
