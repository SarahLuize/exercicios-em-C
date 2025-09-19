#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont, A, B, soma = 0;

    printf("Multiplicação por soma\n");
    printf("Digite dois números: \n");
    scanf("%d %d", &A, &B);

    for(cont = 0; cont < B; cont++)
    {
        soma = soma + A;
    }
    printf("\n %d * %d = %d \n", A, B, soma);


    return 0;
}
