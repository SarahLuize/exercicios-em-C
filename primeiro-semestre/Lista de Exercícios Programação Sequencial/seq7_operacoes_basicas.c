#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, soma, diferenca, produto, quocint, resto;
    double quocfrac;

    printf("Insira o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Insira o segundo numero: \n");
    scanf("%d", &num2);

    //calculo

    soma = num1 + num2;

    diferenca = num1 - num2;

    produto = num1 * num2;

    quocint = num1 / num2;

    quocfrac = (double) num1 / num2;

    resto = num1 % num2;


    //resultado


    printf("Soma : %d\n", soma);

    printf("Diferenca: %d\n", diferenca);

    printf("Produto: %d\n", produto);

    printf("Quociente int: %d\n", quocint);

    printf("Quociente frac.: %.6f\n", quocfrac);

    printf("Resto: %d\n", resto);


    return 0;
}
