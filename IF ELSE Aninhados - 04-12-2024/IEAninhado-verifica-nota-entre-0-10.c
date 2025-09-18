#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    printf("Nota: \n");
    scanf("%d", &nota);

    if (nota>=0) {
        if (nota <=10) {
            printf("Entre 0 e 10\n");
        }
        else {
            printf("Não esta entre 0 e 10\n");
    }
    else {
            printf("Não esta entre 0 e 10\n");
    }
    return 0;
}
