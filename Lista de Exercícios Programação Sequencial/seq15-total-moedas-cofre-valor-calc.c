#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m01, m05, m010, m025, m050, m100;
    float total;

    printf("Insira a quantidade de moedas de R$ 0,01 : \n");
    scanf("%d", &m01);

    printf("Insira a quantidade de moedas de R$ 0,05 : \n");
    scanf("%d", &m05);

    printf("Insira a quantidade de moedas de R$ 0,10 : \n");
    scanf("%d", &m010);

    printf("Insira a quantidade de moedas de R$ 0,25 : \n");
    scanf("%d", &m025);

    printf("Insira a quantidade de moedas de R$ 0,50 : \n");
    scanf("%d", &m050);

    printf("Insira a quantidade de moedas de R$ 1,00 : \n");
    scanf("%d", &m100);

    //CALCULO

    total = m01 * 0.01 + m05 * 0.05 + m010 * 0.10 + m025 * 0.25 + m050 * 0.50 + m100;


    //RESULTADO

        printf ("Total do cofre:  %.2f\n", total);


    return 0;
}
