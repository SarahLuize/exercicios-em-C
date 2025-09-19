#include <stdio.h>
#include <stdlib.h>

void darParabens(char* nome, int idade) {
     printf("Feliz aniversário, %s!\n", nome);
    printf("Você agora tem %d anos!\n", idade);
}

int main()
{
   darParabens("Pedro", 5);
   darParabens("Julia", 9);
   darParabens("Jorge", 12);
   return 0;
}
