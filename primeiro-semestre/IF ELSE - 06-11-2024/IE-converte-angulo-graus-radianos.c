#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    //Atividade 17
    setlocale(LC_ALL, "");
    int angulos;
    float resultado;
    char conversao[2];

    printf("Digite um numero: \n");
    scanf("%d", &angulos);

    printf("Escolha uma conversão.\n");
    printf("(R) para converter ângulo de graus para radianos\n");
    printf("(G) para converter ângulo de radianos para graus\n");
    scanf(" %c", &conversao);

    if (conversao[0] == 'R') {
        resultado = (angulos*M_PI) /180.0;
        printf("O valor de %d graus em radianos é: %.4f radianos\n", angulos, resultado);
    }
    else if (conversao[0] == 'G') {
        resultado = (angulos*180.0) /M_PI;
        printf("O valor de %d radianos em graus é: %.4f graus\n", angulos, resultado);
    }
    else {
        printf("Opção inválida.");
    }


    return 0;
}
