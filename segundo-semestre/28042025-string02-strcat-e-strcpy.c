#include <stdio.h>

int main()
{
   char destino[20] = "Instituto";
   char origem[20] = "Federal";

   printf("destino antes %s\n", destino);
   strcat(destino, origem); // concatenacao: juntar duas strings
   printf("destino depois %s\n", destino);

   strcpy(origem, "Banana"); // atribuicao de um novo valor
   strcpy(destino, "Amora"); // atribuicao de um novo valor
}
