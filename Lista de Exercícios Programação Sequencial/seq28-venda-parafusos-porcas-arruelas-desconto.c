#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

   int qtdParafusos, qtdPorcas, qtdArruelas;
   float prcUnitParaf, prcUnitPorc, prcUnitArr, valorTotal, Desc, valorFinal ;

    printf("Inserir a quantidade de parafusos vendidos: \n");
    scanf("%d", &qtdParafusos);

    printf("Inserir o valor unitário de parafusos: \n");
    scanf("%f", &prcUnitParaf);

    printf("Inserir a quantidade de porcas vendidos: \n");
    scanf("%d", &qtdPorcas);

    printf("Inserir o valor unitário de porcas: \n");
    scanf("%f", &prcUnitPorc);

    printf("Inserir a quantidade de arruelas vendidos: \n");
    scanf("%d", &qtdArruelas);

    printf("Inserir o valor unitário de arruelas: \n");
    scanf("%f", &prcUnitArr);

    //CALCULO

    valorTotal = (qtdParafusos*prcUnitParaf) + (qtdPorcas*prcUnitPorc) + (qtdArruelas*prcUnitArr);
    Desc = (qtdParafusos*prcUnitParaf) * (10.0/100.0) + (qtdPorcas*prcUnitPorc) * (20.0/100.0) + (qtdArruelas*prcUnitArr) * (30.0/100.0);
    valorFinal = valorTotal - Desc;

    //RESULTADOS

    printf("Valor sem desconto: %.2lf\n", valorTotal);
    printf("Desconto: %.2lf\n", Desc);
    printf("Valor com desconto: %.2lf\n", valorFinal);







    return 0;
}
