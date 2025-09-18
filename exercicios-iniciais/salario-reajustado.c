#include <stdio.h>
#include<locale.h>

//ATIVIDADE 5


int main()
{
   setlocale(LC_CTYPE,"");

   float salarioAtual, salarioReaj, porcentagem;

    printf("Calculo de salário \n");

    printf("Insira valor do salário: \n");
    scanf("%f", &salarioAtual);

    printf("Insira a porcentagem: \n");
    scanf("%f", &porcentagem);

    salarioReaj = (porcentagem/100) * salarioAtual + salarioAtual;

    printf("Salário após reajuste: %.2f\n", salarioReaj);


    return 0;
}
