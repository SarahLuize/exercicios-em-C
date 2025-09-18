#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"");

   int segundos, minutos, horas, resto;

    printf("Conversor de segundos para horas/minutos\n");

    printf("Insira a quantidade de segundos: \n");
    scanf("%d", &segundos);

    //CALCULOS

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    resto = resto % 60;
    segundos = resto / 60;

    //RESULTADOS

    printf("Horas : %d\n", horas);
    printf("Minutos : %d\n", minutos);
    printf("Segundos : %d\n", resto);

    return 0;
}
