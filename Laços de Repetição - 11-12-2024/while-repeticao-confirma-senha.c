#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    //confirmar senha
    int contador = 0;
    int somador = 0;
    char senha[5];
    char confirmarSenha[5];

    fflush(stdin);
    printf("Digite uma senha de 4 digitos: \n");
    scanf("%s", &senha);


    do
    {
        printf("Confirme sua senha: \n");
        scanf("%s", &confirmarSenha);
        //printf(">>>>> senha: %s, confirmacao: %s --> %d", senha, confirmarSenha, strcmp(senha, confirmarSenha));

        if(strcmp(senha, confirmarSenha) != 0) {
            printf("A senha digitada esta errada.\n");
        }
    }
    while(strcmp(senha, confirmarSenha) != 0);

    if(strcmp(senha, confirmarSenha) == 0)
    {
        printf("Senha Correta");
    }
}
