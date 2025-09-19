#include <stdio.h>
#include <stdlib.h>

float calc_valor_parcela (float val_emp, float taxa, int num_parcelas) {
    float vp = val_emp *(pow(1+taxa, num_parcelas) /num_parcelas);
    //printf("vp %f\n",vp);
    return vp;
}

float calc_parcela_maxima(float salario) {
    return salario * 0.30;
}

int main()
{
    //calculo

    int num_parcelas;
    float val_emp, taxa, parcelaMaxima, salario, val_parcela;

    printf("Emprestimo e parcelas\n");

    printf("Insira valor do salario:\n");
    scanf("%f", &salario);

    printf("Insira valor emprestimo:\n");
    scanf("%f", &val_emp);

    printf("Insira numero de parcelas:\n");
    scanf("%d", &num_parcelas);

    parcelaMaxima = calc_parcela_maxima(salario);
    val_parcela = calc_valor_parcela(val_emp, 0.025, num_parcelas);

    printf("Parcela maxima    : %f\n", parcelaMaxima);
    printf("Parcela calculada : %f\n", val_parcela);

    if (val_parcela <= parcelaMaxima) {
        printf("Liberado\n");
    }
    else {
        printf("Margem insuficiente\n");
    }

    return 0;
}
