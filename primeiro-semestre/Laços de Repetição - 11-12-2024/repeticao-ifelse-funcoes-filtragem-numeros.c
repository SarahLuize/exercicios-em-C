#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void definirMenorMaior(int num1, int num2, int *menor, int *maior)
{
    if (num1 < num2)
    {
        *menor = num1;
        *maior = num2;
    }
    else
    {
        *menor = num2;
        *maior = num1;
    }
}

void IntervaloCrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = menor; cont <= maior; cont++)
    {
        printf("%d\n", cont);
    }
}

void IntervaloDecrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = maior; cont >= menor; cont--)
    {
        printf("%d\n", cont);
    }
}

void listarImparesCrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = menor; cont <= maior; cont++)
    {
        if (cont % 2 != 0)
        {
            printf("%d\n", cont);
        }
    }
}

void listarImparesDecrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = maior; cont >= menor; cont--)
    {
        if (cont % 2 != 0)
        {
            printf("%d\n", cont);
        }
    }
}

void listarParesCrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = menor; cont <= maior; cont++)
    {
        if (cont % 2 == 0)
        {
            printf("%d\n", cont);
        }
    }
}

void listarParesDecrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = maior; cont >= menor; cont--)
    {
        if (cont % 2 == 0)
        {
            printf("%d\n", cont);
        }
    }
}

void listarPositivosCrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = menor; cont <= maior; cont++)
    {
        if (cont > 0)
        {
            printf("%d\n", cont);
        }
    }
}

void listarPositivosDecrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = maior; cont >= menor; cont--)
    {
        if (cont > 0)
        {
            printf("%d\n", cont);
        }
    }
}

void listarNegativosCrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = menor; cont <= maior; cont++)
    {
        if (cont < 0)
        {
            printf("%d\n", cont);
        }
    }
}

void listarNegativosDecrescente(int num1, int num2)
{
    int cont, menor, maior;
    definirMenorMaior(num1, num2, &menor, &maior);
    for (cont = maior; cont >= menor; cont--)
    {
        if (cont < 0)
        {
            printf("%d\n", cont);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, opcaoOrdem, escolha;

    printf("Digite dois números: \n");
    scanf("%d %d", &num1, &num2);

    printf("Escolha uma opção\n");
    printf("1. Ordem crescente\n");
    printf("2. Ordem decrescente\n");
    scanf("%d", &opcaoOrdem);

    printf("Escolha uma opção\n");
    printf("1. Somente os ímpares\n");
    printf("2. Somente os pares\n");
    printf("3. Somente os positivos\n");
    printf("4. Somente os negativos\n");
    scanf("%d", &escolha);

    if (opcaoOrdem == 1)
    {
        if (escolha == 1)
        {
            listarImparesCrescente(num1, num2);
        }
        else if (escolha == 2)
        {
            listarParesCrescente(num1, num2);
        }
        else if (escolha == 3)
        {
            listarPositivosCrescente(num1, num2);
        }
        else if (escolha == 4)
        {
            listarNegativosCrescente(num1, num2);
        }
    }
    else if (opcaoOrdem == 2)
    {
        if (escolha == 1)
        {
            listarImparesDecrescente(num1, num2);
        }
        else if (escolha == 2)
        {
            listarParesDecrescente(num1, num2);
        }
        else if (escolha == 3)
        {
            listarPositivosDecrescente(num1, num2);
        }
        else if (escolha == 4)
        {
            listarNegativosDecrescente(num1, num2);
        }
    }

        return 0;
}
