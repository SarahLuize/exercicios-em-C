#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

   float valor, dinheiro, dnDesc, debito, dbDesc, credito1x, cr1Desc, credito3x, cr3Desc;

    printf("Insira o valor do aparelho: \n");
    scanf("%f", &valor);

    //CALCULO

    dnDesc = (5.0/100) * valor;
    dinheiro = valor - dnDesc;

    dbDesc = (2.0/100) * valor;
    debito = valor - dbDesc;

    cr1Desc = (3.0/100) * valor;
    credito1x =  valor + cr1Desc;

    cr3Desc = (5.0/100) * valor;
    credito3x = valor + cr3Desc;
    credito3x = credito3x / 3;

    //RESULTADO

    printf("Dinheiro: %.2f\n", dinheiro);
    printf("Débito: %.2f\n", debito);
    printf("Crédito 1X: %.2f\n", credito1x);
    printf("Crédito 3X: %.2f\n", credito3x);

    return 0;
}
