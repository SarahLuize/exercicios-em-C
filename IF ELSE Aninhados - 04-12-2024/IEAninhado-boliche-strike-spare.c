#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1, p2;
    printf("Informe a quantidade de acertos (primeira jogada):  \n");
    scanf("%d", &p1);

    if (p1 == 10) {
        printf("Strike!");
    }
    else {
        printf("Informe a quantidade de acertos (segunda jogada): \n");
        scanf("%d", &p2);

       if (p1 + p2 == 10) {
        printf("Spare!");
       }
       else {
        printf("Jogada aberta/Open!");
       }
    }
    return 0;
}
