#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 50

int verificarNumero(char string[], int len)
{
    int contNum = 0;
    for(int i = 0; i < len; i++)
    {
        if(string[i] >= '0' && string[i] <= '9')
        {
            contNum++;
        }
    }
    return contNum;
}

int main()
{
    int i, j, len=0, contNum=0, resultado = 0, valor=0;
    char string[max], stringInv[max];

    printf("1.VERIFICAR SE A STRING INFORMADA CONTEM APENAS NUMEROS..\n");
    printf("\nDigite uma string: (limite 50 caracteres)\n");
    fflush(stdin);
    gets(string);
    fflush(stdin);
    len = strlen(string);

    contNum = verificarNumero(string, len);

    printf("\nString contem %d numeros.\n", contNum);

    if(contNum != len)
    {
        printf("\nNão contem um numero valido.\n");
    }
    else
    {
        printf("%s contem numero(s) inteiro(s)\n",string);
        printf("\n2.CONVERSOR DE STRINGS EM NUMERO INTEIRO.\n");

        //CONVERTER STRINGS EM INTEIRO
        for(i=0; i<len; i++){
            printf("\n ASCII: %c = %d\n", string[i], string[i]);
            string[i] = string[i] - 48;
            printf("String: %d\n", string[i]);
        }

        printf("\nDIGITOS MULTIPLICADOS POR POTENCIAS DE 10\n");
        //POTENCIA (10^0, 10^1...)
        j=0; //i=3
        for(i=len-1; i>=0; i--){
            stringInv[j] = string[i];
            valor= stringInv[j] * pow(10, j);
            printf("\n %d elevado a %d : %d\n", stringInv[j], j, valor);
            j++;
            resultado += valor;
            printf("Soma: %d\n", resultado);
        }
    }
}
