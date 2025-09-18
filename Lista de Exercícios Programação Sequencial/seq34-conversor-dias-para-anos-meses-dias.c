#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

    int dias, meses, anos, resto;

    printf("Insira a quantidade de dias: \n");
    scanf("%d", &dias);

    //CALCULOS

    anos = dias / 365;
    resto = dias % 365;
    meses = resto / 30;
    dias = resto %30;

    //RESULTADOS

    printf("Você viveu %d anos, %d meses e %d dias \n", anos, meses, dias);

    return 0;
}
