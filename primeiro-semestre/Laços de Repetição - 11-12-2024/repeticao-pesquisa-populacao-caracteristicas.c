#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    //PESQUISA DE CARACTERISTICAS FISICAS POPULAÇÃO

    setlocale(LC_ALL, "Portuguese");

    char sexo, olhos, cabelos;
    int idade, maiorIdade, contMasc_18_35 = 0, contFem_18_35_olC_cabP = 0, cont = 0;

    printf("Digite a idade do %d° participante: ", cont+1);
    scanf("%d", &idade);
    maiorIdade = idade;

    while(idade != -1){
        fflush(stdin);
        printf("Digite o sexo do %d° participante (M/F): ", cont+1);
        scanf("%c", &sexo);


        fflush(stdin);
        printf("Digite a cor dos olhos do %d° participante (A/C/V): ", cont+1);
        scanf("%c", &olhos);

        fflush(stdin);
        printf("Digite a cor do cabelo do %d° participante (C/L/P):", cont+1);
        scanf("%c", &cabelos);

        // Masculino com idade entre 18 e 35 (inclusive)

        if(sexo == 'M' && idade >= 18 && idade <= 35){
            contMasc_18_35++;
        }

        // Feminino com idade entre 18 e 35 (inclusive) cabelos (P)retos e olhos(C)astanhos

        if(sexo == 'F' && idade >= 18 && idade <= 35 && cabelos == 'P' && olhos == 'C'){
            contFem_18_35_olC_cabP++;
        }

        system("cls"); // Limpa a tela
        cont++;
        printf("Digite a idade do %d° participante: ", cont+1);
        scanf("%d", &idade);

        if(idade > maiorIdade){
            maiorIdade = idade;
        }
    }

    printf("\n Resultado da pesquisa\n");
    printf("\n ---------------------\n");
    printf("\n A maior idade entre os participantes é: %d\n", maiorIdade);
    printf("\n O %% de participantes masculinos entre 18 e 35 (inclusive)");
    printf("É : %f\n", 100.0*(float)contMasc_18_35/(float)cont);

    printf("\n O %% de participantes femininos entre 18 e 35 (inclusive)");
    printf("Olhos castanhos e cabelos pretos é: %f\n", 100.0*(float)contFem_18_35_olC_cabP/(float)cont);

    return 0;
}
