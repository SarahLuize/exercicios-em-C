#include <stdio.h>
#include<locale.h>

//ATIVIDADE 5


int main()
{
   setlocale(LC_CTYPE,"");

   float salarioAtual, salarioReaj, porcentagem;

    printf("Calculo de sal�rio \n");

    printf("Insira valor do sal�rio: \n");
    scanf("%f", &salarioAtual);

    printf("Insira a porcentagem: \n");
    scanf("%f", &porcentagem);

    salarioReaj = (porcentagem/100) * salarioAtual + salarioAtual;

    printf("Sal�rio ap�s reajuste: %.2f\n", salarioReaj);


    return 0;
}
