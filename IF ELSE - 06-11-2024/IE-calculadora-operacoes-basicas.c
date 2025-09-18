#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero1, numero2;

    char operacao[2];
    float resultado;

    printf("Calculo com operações\n");

    printf("Digite um número: \n");
    scanf("%d", &numero1);

    printf("Digite mais um número: \n");
    scanf("%d", &numero2);

    printf("Informe uma operação: \n");
    printf("A- Adição. S- Subtração. M- Multiplicação. D- Divisão. R- Resto. \n");
    scanf(" %c", &operacao);

    if (operacao[0] == 'A') {
        resultado = (float)numero1 + numero2;
    }
    else if (operacao[0] == 'S') {
        resultado = (float)numero1 - numero2;
    }
    else if (operacao[0] == 'M') {
        resultado = (float)numero1 * numero2;
    }
    else if (operacao[0] == 'D') {
        resultado = (float)numero1 / numero2;
    }
    else if (operacao[0] == 'R') {
        resultado = numero1 % numero2;
    }
    else {
        printf("Operação Invalida");
    }

    printf("Resultado : %.2f\n", resultado);

    return 0;
}
