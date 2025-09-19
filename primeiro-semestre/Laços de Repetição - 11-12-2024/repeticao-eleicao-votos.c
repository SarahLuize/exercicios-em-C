#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    //Eleição presidencial votos

    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int nulos = 0, brancos = 0, cont = 0;


    do {
        printf("\n----------------------------\n");
        printf("\n <1> Candidato 01\n");
        printf("\n <2> Candidato 02\n");
        printf("\n <3> Candidato 03\n");
        printf("\n <4> Candidato 04\n");
        printf("\n <5> Voto nulo\n");
        printf("\n <6> Voto em branco\n");
        printf("\n <0> Sair\n");
        printf("\n----------------------------\n");
        printf("Entre com seu voto: ");
        scanf("%d", &voto);

        system("cls"); // Limpa tela

        switch(voto){
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
        candidato3++;
            break;
        case 4:
        candidato4++;
            break;
        case 5:
        nulos++;
            break;
        case 6:
        brancos++;
            break;
        case 0:
            printf("\nVocê SAIU das votações. Obrigado por participar!\n");
            break;
        default:
            printf("\n<<< O candidato escolhido não existe.>>>\n");
        }
    }
    while(voto != 0);

    cont = candidato1 + candidato2 + candidato3 + candidato4 + nulos + brancos;
    system("cls"); // Limpa tela
    printf("\n APURAÇÃO DOS VOTOS ");
    printf("\n----------------------------\n");
    printf("\n <1> Candidato 01 ---- %d(%.2f%%)\n", candidato1, (float)candidato1*100/(float)cont);
    printf("\n <2> Candidato 02 ---- %d(%.2f%%)\n", candidato2, (float)candidato2*100/(float)cont);
    printf("\n <3> Candidato 03 ---- %d(%.2f%%)\n", candidato3, (float)candidato3*100/(float)cont);
    printf("\n <4> Candidato 04 ---- %d(%.2f%%)\n", candidato4, (float)candidato4*100/(float)cont);
    printf("\n <5> Voto nulo ------- %d(%.2f%%)\n", nulos, (float)nulos*100/(float)cont);
    printf("\n <6> Voto em branco ---- %d(%.2f%%)\n", brancos, (float)brancos*100/(float)cont);
    printf("\n----------------------------\n");
}
