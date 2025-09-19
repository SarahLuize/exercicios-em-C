#include <stdio.h>
#include <stdlib.h>

int triplo (int valor) {
   return valor * 3;
}

int main()
{
   int valor;

    printf("Digite um número: \n");
    scanf("%d", &valor);
    printf("Triplo : %d\n", triplo(valor));
    return 0;
}
