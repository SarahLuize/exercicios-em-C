#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

   int valor, resto, n100, n20, n5, n1;

    printf("Insira valor: \n");
    scanf("%d", &valor);

    n100 = valor / 100;
    resto = valor % 100;
    n20 = resto / 20;
    resto = resto % 20;
    n5 = resto / 5;
    resto = resto % 5;
    n1 = resto;

    printf("Notas de R$ 100 : %d\n", n100);
    printf("Notas de R$ 20 : %d\n", n20);
    printf("Notas de R$ 5 : %d\n", n5);
    printf("Notas de R$ 1 : %d\n", n1);

    return 0;
}
