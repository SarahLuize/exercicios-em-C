#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont, num1, num2, menor, maior;

    printf("Digite dois números impares: \n");
    scanf("%d %d", &num1, &num2);

    if (num1 % 2 == 0 || num2 % 2 == 0)
    {
        printf("Insira dois números impares.\n");
        return 1;
    }

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

    for (cont = menor; cont <= maior; cont++)
    {
        if (cont % 2 != 0)
        {
            printf("%d\n", cont);
        }
    }

    return 0;
}
