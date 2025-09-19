#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, val_inss;

    printf("Digite o valor do salario: \n");
    scanf("%lf", &salario);

    if (salario > 2000) {
        val_inss = salario * 0.11;
    }
    else {
        val_inss = salario * 0.075;
    }

    val_inss = round(val_inss*100)/100;

    printf("Salario: %.2lf\n", salario);
    printf("Valor do INSS: %.2lf\n", val_inss);

    return 0;
}
