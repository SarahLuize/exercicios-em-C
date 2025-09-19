#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número inteiro: \n");
    scanf("%d", &numero);

    for (int cont = 0; cont <= numero; cont++)
    {
        printf("%d\n", cont);
    }

    return 0;
}
