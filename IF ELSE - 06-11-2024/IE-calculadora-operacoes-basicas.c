#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero1, numero2;

    char operacao[2];
    float resultado;

    printf("Calculo com opera��es\n");

    printf("Digite um n�mero: \n");
    scanf("%d", &numero1);

    printf("Digite mais um n�mero: \n");
    scanf("%d", &numero2);

    printf("Informe uma opera��o: \n");
    printf("A- Adi��o. S- Subtra��o. M- Multiplica��o. D- Divis�o. R- Resto. \n");
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
        printf("Opera��o Invalida");
    }

    printf("Resultado : %.2f\n", resultado);

    return 0;
}
