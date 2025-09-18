#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

   int salBrt, qtdHrs25, qtdHrs50;
   float valHrNormal, valHrs25, valHrs50,somaProv;

    printf("Cálculo de horas de trabalho\n");

    printf("Insira o salário bruto: \n");
    scanf("%d", &salBrt);

    printf("Insira a quantidade de horas trabalhadas no mês (25%): \n");
    scanf("%d", &qtdHrs25);

    printf("Insira a quantidade de horas trabalhadas no mês (50%): \n");
    scanf("%d", &qtdHrs50);

    //CALCULO

    valHrNormal = salBrt / 220;
    valHrs25 = valHrNormal * qtdHrs25 * 1.25;
    valHrs50 = valHrNormal * qtdHrs50 * 1.5;
    somaProv = salBrt + valHrs25 + valHrs50;

    //RESULTADO

    printf("Valor da hora normal: R$ %6.2f\n", round(valHrNormal));
    printf("Valor da hora extra 25%: R$ %6.2f\n", round(valHrs25));
    printf("Valor da hora extra 50%: R$ %6.2f\n", round(valHrs50));
    printf("Soma dos proventos: R$ %6.2f\n", round(somaProv));

    return 0;
}
