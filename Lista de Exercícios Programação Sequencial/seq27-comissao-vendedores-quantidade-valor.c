#include <stdio.h>
#include <locale.h>

int main()
{

   setlocale(LC_CTYPE,"");

   int qtdCarroVend, valCarroVend;
   float ComQtde, ComValor, ComTotal, Salario;

    printf("Quantidade de carros vendidos: \n");
    scanf("%d", &qtdCarroVend);

    printf("Valor carros vendidos: \n");
    scanf("%d", &valCarroVend);

    //CALCULOS

    ComQtde = 200.00 * qtdCarroVend;
    ComValor = (2.0/100.00) * valCarroVend;
    ComTotal = ComQtde + ComValor;
    Salario = ComTotal + 800.00;

    //RESULTADOS

    printf("Comissão por carro vendido: %.2f\n", ComQtde);
    printf("Comissão por valor: %.2f\n", ComValor);
    printf("Comissão total: %.2f\n", ComTotal);
    printf("Salario total: %.2f\n", Salario);

    return 0;
}
