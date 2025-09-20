#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 5

int main()
{
   srand(0); // srand(time (0));inicializar a semente do gerador de numeros pseudo-aleatorios
   int mat[lin][col], i, j, soma=0, contAcima=0;
   float media=0; // i = linhas. j = colunas
   printf("MATRIZES\n");

   for(i=0; i<lin; i++){
      for(j=0; j<col; j++){
         mat[i][j] = rand()%10; //numero aleatorio entre 0 e 9
         soma += mat[i][j]; //acumulador
      }
   }
   media =(float)soma / (lin * col);
   printf("soma %d\n", soma);
   printf("media %.2f\n", media);

   for(i=0; i<lin; i++){
      for(j=0; j<col; j++){
         if(mat[i][j] > media){
               printf("%d ", mat[i][j]);
               contAcima++;
         }
      }
   }

   printf("\nNumeros acima da media %d\n", contAcima);
}
