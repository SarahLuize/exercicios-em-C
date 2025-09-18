#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");

    //padaria Hotpão - atividade 26

    int paes, broas;
    float totalVendido, poup;

    printf("Insira a quantidade de pães vendidos: \n");
    scanf("%d", &paes);

    printf("Insira a quantidade de broas vendidas: \n");
    scanf("%d", &broas);


    //CALCULO

    totalVendido = (paes * 0.12) + (broas * 1.50);
    poup = (15.0/100.0) * totalVendido;

    //RESULTADO

    printf("Total vendido: %.2f\n", totalVendido);
    printf("Poupança: %.2f\n", poup);

    return 0;
}
