#include <stdio.h>
#include <stdlib.h>

//Atividade : Ordenar por nome. De acordo com a lista ASCII

int printArray(int *v, int tam, int i)
{
   for (int x=0; x<tam; x++) {
      printf("%d ", v[x]);
   }
   if(int x==1 || x==i+1) {
      printf("*%d " v[x]);
   }
   else {
      printf(" %d", v[x]);
   }
}

int main()
{
   int v[10] = {5,9,3,7,2,0,8,4,1,6};
   int tam=10, i, j, temp;
   int contTrocas=0, contComp=0;

   printArray(v, tam, i);
   printf("\n");

   for(j=0; j<tam-1; j++) {
      int houveTrocas=0; //false
      for(i=0; i<tam-1-j; i++) {
         contComp++;
         if (v[i]>v[i + 1]) {
            temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
            contTrocas++;
            houveTrocas = 1; //True
         }
         printArray(v, tam, i);
      }
      if (houveTrocas == 0) break;
   }
   printf("contTrocas: %d", contTrocas);
   printf("contComp: %d", contComp);

}
