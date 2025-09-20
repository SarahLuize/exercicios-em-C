#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matr;
    char nome[50];
    char sexo;
    float alt;
} tAluno;

int main()
{
    tAluno aluno;
    printf("\nMatr: ");
    scanf("%d", &aluno.matr);
    printf("\nSexo: ");
    fflush(stdin);
    scanf("%c", &aluno.sexo);
    printf("\nAltura: ");
    scanf("%f", &aluno.alt);
    printf("\nNome: ");
    fflush(stdin);
    gets(aluno.nome);

    printf("\n-------------\n");
    printf("Matr %d\n", aluno.matr);
    printf("Nome %s\n", aluno.nome);
    printf("Sexo %c\n", aluno.sexo);
    printf("Altura %f\n", aluno.alt);}
