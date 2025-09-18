#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0;
    int idade, maiorIdade = 0;
    char sexo, corCabelo, corOlhos;
    float porcentagem;
    int habitantesTotais = 0, Masc18_35 = 0, Fem18_35_OlCast_CblPreto = 0;

    printf("Porcentagem das características físicas da população\n");
    printf("Digite -1 na idade para sair\n");

    while (idade != -1)
    {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == -1) // Se for -1 ele encerra o programa
            return 0;

        printf("Sexo (M - Masculino . F - Feminino): \n");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): \n");
        scanf(" %c", &corOlhos);

        printf("Cor dos cabelos (L - Loiros, C - Castanhos, P - Pretos): \n");
        scanf(" %c", &corCabelo);

        habitantesTotais++;

        // Verifica a maior idade
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        // Homens entre 18 e 35 anos
        if (sexo == 'M' && idade >= 18 && idade <= 35)
        {
            Masc18_35++;
        }

        // Mulheres entre 18 e 35 anos com olhos castanhos e cabelos pretos
        if (sexo == 'F' && idade >= 18 && idade <= 35 && corOlhos == 'C' && corCabelo == 'P')
        {
            Fem18_35_OlCast_CblPreto++;
        }
    }

    // Cálculos das porcentagens
    float porcentMasc18_35 = (Masc18_35 * 100.0) / habitantesTotais;
    float porcentFem18_35_OlCast_CblPreto = (Fem18_35_OlCast_CblPreto * 100.0) / habitantesTotais;

    // Exibição dos resultados
    printf("Maior idade dos habitantes: %d\n", maiorIdade);
    printf("Porcentagem de homens entre 18 e 35 anos: %.2f%%\n", porcentMasc18_35);
    printf("Porcentagem de mulheres entre 18 e 35 anos com olhos castanhos e cabelos pretos: %.2f%%\n", porcentFem18_35_OlCast_CblPreto);

    return 0;
}
