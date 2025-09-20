#include <stdio.h>
#include <stdlib.h>

typedef struct {
      int matr;
      float alt;
      char sexo;
      char nome[50];
   } tAluno;

int main()
{
   tAluno sarah;

   sarah.matr = 123;
   sarah.sexo = 'F';
   sarah.alt = 1.60;
   strcpy(sarah.nome, "Sarah");

   printf("Matr: %d\n", sarah.matr);
   printf("Nome: %s\n", sarah.nome);
   printf("Sexo: %c\n", sarah.sexo);
   printf("Altura: %.2f\n", sarah.alt);
}
