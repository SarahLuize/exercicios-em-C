#include <stdio.h>
#include <stdlib.h>

int dobro(int valor){
   return valor * 2;
}




int main()
{

   int valor = 10;

  printf("Digite um n�mero:");
scanf("%d", &valor);

  printf("Valor: \n", valor);
  printf("Valor: \n", dobro(valor));

    return 0;
}
