#include <stdio.h>
#include <stdlib.h>

typedef struct {
   int matricula;
   char nome[50];
   float altura;
} tAluno;

int main()
{
   int qtd = 0, i;
   tAluno vAluno[40];

   printf("Inclusao de Alunos (Struct+Vetor)\n");

   printf("Matricula: ");
   scanf("%d", &vAluno[qtd].matricula);
   while(vAluno[qtd].matricula > 0) {
      printf("Nome: ");
      fflush(stdin);
      gets(vAluno[qtd].nome);
      printf("Altura: ");
      scanf("%f", &vAluno[qtd].altura);

      qtd++;

      printf("Matricula: ");
      scanf("%d", &vAluno[qtd].matricula);
   }

   printf("%d alunos cadastrados\n", qtd);

   printf("+------+----------------------+--------+\n");
   printf("| Matr | Nome.................| Altura |\n");
   printf("+------+----------------------+--------+\n");
   for(i=0; i<qtd;i++){
      printf("| %4d | %-20s | %6.2f |\n", vAluno[i].matricula, vAluno[i].nome, vAluno[i].altura);
   }
}
