#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int main()
{
    int i, len;
    char string[max];
    printf("Informe uma string: \n");
    gets(string);

    len = strlen(string);

    for(i=0; i<len; i++)
    {
        if(string[i] != string[len - 1 -i])
        {
            printf("Nao e palindromo.");
            return 0;
        }
        else
        {
            printf("E palindromo.");
            return 0;
        }
    }
}
