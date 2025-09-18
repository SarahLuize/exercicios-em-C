#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont, num;

    printf("Tabuada\n");
    printf("Digite um número: \n");
    scanf("%d", &num);

    printf("Tabuada do %d \n", num);

    for(cont = 0; cont <= 10; cont++)
    {
    printf("\n %d x %d = %d\n", num, cont, num * cont);
    }

    return 0;
}
