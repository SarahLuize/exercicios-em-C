#include <stdio.h>
#include <stdlib.h>

void darParabens(char* nome, int idade) {
     printf("Feliz anivers�rio, %s!\n", nome);
    printf("Voc� agora tem %d anos!\n", idade);
}

int main()
{
   darParabens("Pedro", 5);
   darParabens("Julia", 9);
   darParabens("Jorge", 12);
   return 0;
}
