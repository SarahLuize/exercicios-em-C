#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

  int idade, dias;
  char nome[20];

  printf("insira seu nome : ");
  scanf("%19s", nome);

  printf("Insira sua idade ");
  scanf("%d", &idade);

  dias = idade * 365.0;

printf("%s , você já viveu %d dias!\n", nome, dias);

    return 0;
}
