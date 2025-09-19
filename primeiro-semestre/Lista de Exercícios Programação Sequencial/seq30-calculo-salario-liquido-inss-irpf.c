#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

   int salarioBrt;
   float INSS, baseIRPF, IRPF, salarioLiq;

    printf("Insira o valor do salário bruto: \n");
    scanf("%d", &salarioBrt);

    //CALCULO

    INSS = (salarioBrt) *10/100;
    baseIRPF = salarioBrt - INSS;
    IRPF = baseIRPF * 5/100;
    salarioLiq = baseIRPF - IRPF;

    //RESULTADO

    printf("Valor do INSS: %.2f \n", INSS);
    printf("Valor da base do IRPF: %.2f \n", baseIRPF);
    printf("Valor do IRPF: %.2f \n", IRPF);
    printf("Valor do salário líquido: %.2f \n", salarioLiq);



    return 0;
}
