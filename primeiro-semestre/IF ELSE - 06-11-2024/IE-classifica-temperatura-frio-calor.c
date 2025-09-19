#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperatura;
    printf("Insira a temperatura: \n");
    scanf("%d", &temperatura);

    if (temperatura < 22) {
            printf("FRIO");
    }
    else {
        printf("CALOR");
    }
    return 0;
}
