#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digite uma idade: \n");
    scanf("%d", &idade);

    if (idade<=16)
    {
        printf("Nao eleitor");
    }
    else if (idade<=17)
    {
        printf("Facultativo");
    }
    else if (idade<=64)
    {
        printf("Obrigatorio");
    }
    else
    {
        printf("Facultativo");
    }

    return 0;
}
