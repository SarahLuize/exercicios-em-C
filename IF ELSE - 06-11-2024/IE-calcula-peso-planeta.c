#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesoNaTerra, planeta;
    float pesoPlaneta;

//Atividade 16
    printf("Digite um peso (numero inteiro): \n");
    scanf("%d", &pesoNaTerra);

    printf("Digite um numero para escolher um planeta. \n");
    printf("1- Mercurio, 2- Venus, 3- Marte, 4- Jupiter, 5-Saturno, 6- Urano\n");
    scanf("%d", &planeta);

    if (planeta == 1) {
        pesoPlaneta = pesoNaTerra * 0.37;
        printf("Peso equivalente em Mercurio: %.1f\n", pesoPlaneta);
    }
    else if (planeta == 2) {
        pesoPlaneta = pesoNaTerra * 0.88;
        printf("Peso equivalente em V�nus: %.1f\n", pesoPlaneta);
    }
    else if (planeta == 3) {
        pesoPlaneta = pesoNaTerra * 0.38;
        printf("Peso equivalente em Marte : %.1f\n", pesoPlaneta);
    }
    else if (planeta == 4) {
        pesoPlaneta = pesoNaTerra * 2.64;
        printf("Peso equivalente em Jupiter : %.1f\n", pesoPlaneta);
    }
    else if (planeta == 5) {
        pesoPlaneta = pesoNaTerra * 1.15;
        printf("Peso equivalente em Saturno : %.1f\n", pesoPlaneta);
    }
    else if (planeta == 6) {
        pesoPlaneta = pesoNaTerra * 1.17;
        printf("Peso equivalente em Urano : %.1f\n", pesoPlaneta);
    }
    else {
        printf("Planeta invalido\n");
    }

    switch(planeta) { //Add vari�vel. Funciona com INT e CHAR. S� funciona para igualdades.
    case 1: //Adicionar c�digo na linha abaixo.
        pesoPlaneta = pesoNaTerra * 0.37;
        printf("Peso equivalente em Mercurio: %.1f\n", pesoPlaneta);
        break;} //Colocar break para o c�digo n�o continuar rodando. Diferente do IF ELSE, ele continua o c�digo.
        default; //Tipo o ELSE. �ltima op��o poss�vel.
        //Add c�digo abaixo tamb�m.
    return 0;
}
