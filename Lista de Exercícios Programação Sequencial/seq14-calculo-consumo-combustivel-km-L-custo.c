#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km_in, km_fn, km_prc;
    float prc_gas, v_abast, l_abast, cons_kml, prc_km;

    printf("insira o valor do km inicial: \n");
    scanf("%d", &km_in);

    printf("insira o valor do km final: \n");
    scanf("%d", &km_fn);

    printf("insira o valor do preco da gasolina: \n");
    scanf("%f", &prc_gas);

    printf("insira o valor do valor abastecido: \n");
    scanf("%f", &v_abast);


    //CALCULO

    km_prc = km_fn - km_in;
    l_abast = v_abast / prc_gas;
    cons_kml = km_prc / l_abast;
    prc_km = v_abast / km_prc;


    //RESULTADO

    printf("Km percorrido: %d\n", km_prc);


    printf("Litros abastecido: %.2f\n", l_abast);


    printf("Consumo km/l: %.2f\n", cons_kml);


    printf("Preco km: %.2f\n", prc_km);



    return 0;
}
