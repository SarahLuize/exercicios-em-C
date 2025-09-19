#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, menor, maior;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        menor = num1;
        maior = num2;
    }
    else
    {
        menor = num2;
        maior = num1;
    }

    printf("Intervalo de números inteiros entre %d e %d:\n", menor, maior);
    for (int cont = menor; cont < maior; cont++)
    {
        printf("%d\n", cont);
    }

    return 0;

}
