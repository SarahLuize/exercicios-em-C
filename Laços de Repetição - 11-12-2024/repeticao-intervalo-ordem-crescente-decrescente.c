#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont, num1, num2, menor, maior;
    char ordem;

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


    printf("Escolha a ordem: \n");
    printf("C - Crescente . D - Decrescente \n");

    scanf(" %c", ordem);

    if (ordem == 'C' || ordem == 'c')
    {
        for (cont = menor; cont <= maior; cont++)
        {
            printf("%d ", cont);
        }
    }
    else if (ordem == 'D' || ordem == 'd')
    {
        for (cont = maior; cont >= menor; cont--)
        {
            printf("%d ", cont);
        }
    }
    else
    {
        printf("Escolha inválida!\n");
    }

    return 0;
}
