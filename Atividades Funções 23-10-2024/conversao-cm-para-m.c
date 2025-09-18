#include <stdio.h>
#include <stdlib.h>

float conversaoCM_M(float comprimento){
   return comprimento/100;
}


int main()
{
   float teste1=1299, teste2= 290, teste3 = 25;
   float resposta1, resposta2, resposta3;

   resposta1 = conversaoCM_M(teste1);
    printf("Teste 1: converteu: %.2f cm para %.2f m \n", teste1, resposta1);

   resposta1 = conversaoCM_M(teste1);
    printf("Teste 2: converteu: %.2f cm para %.2f m \n", teste2, resposta2);

   resposta1 = conversaoCM_M(teste1);
    printf("Teste 3: converteu: %.2f cm para %.2f m \n", teste3, resposta3);

    return 0;
}
