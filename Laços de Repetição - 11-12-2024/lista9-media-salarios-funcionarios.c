#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cont = 0;
    int qtdeFuncionarios, mediaSalario, codigo;
    int codigoMenorSalario, codigoMaiorSalario;
    float somaSalarios = 0;
    float salario;
    float maiorSalario = -2147483647.0;
    float menorSalario = 2147483647.0;


    printf("Calculo de media de salarios\n");

    printf("\n Informe a quantidade de funcionarios: \n");
    scanf("%d", &qtdeFuncionarios);

    while(cont < qtdeFuncionarios)
    {
        printf("\n Informe o codigo do funcionario: \n");
        scanf("%d", &codigo);
        printf("\n Informe o salario do funcionario: \n");
        scanf("%f", &salario);

        somaSalarios += salario;

        if(salario > maiorSalario)
        {
            maiorSalario = salario;
            codigoMaiorSalario = codigo;
        }
        if(salario < menorSalario)
        {
            menorSalario = salario;
            codigoMenorSalario = codigo;
        }
        cont++;
    }

    printf("\n Media dos salarios : %.2f \n", (float)(somaSalarios/qtdeFuncionarios));
    printf("\n Menor salario : codigo %d , salario : %.2f \n", codigoMaiorSalario, maiorSalario);
    printf("\n Maior salario : codigo %d , salario : %.2f \n", codigoMenorSalario, menorSalario);

    return 0;
}
