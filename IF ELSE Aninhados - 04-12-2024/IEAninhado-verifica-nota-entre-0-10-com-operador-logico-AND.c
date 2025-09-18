#include <stdio.h>
#include <stdlib.h>
//Versão com AND / &&
int main()
{
    int nota;
    printf("Nota: \n");
    scanf("%d", &nota);

    if (nota>=0 && nota <=10)
    {
        {
            printf("Entre 0 e 10\n");
        }
    }
    else
    {
        printf("Não esta entre 0 e 10\n");
    }
    return 0;
}
