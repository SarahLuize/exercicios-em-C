#include <stdio.h>
#include <stdlib.h>

void main()
{
    //atividade 3- confirmar senha
    int senha;
    int confirmarSenha;

    printf("Digite uma senha de 4 digitos: \n");
    scanf("%d", &senha);


    do
    {
        printf("Confirme sua senha: \n");
        scanf("%d", &confirmarSenha);

        if(confirmarSenha != senha) {
            printf("A senha digitada esta errada.\n");
        }
    }
    while(confirmarSenha != senha);

    if(confirmarSenha == senha)
    {
        printf("Senha Correta");
    }
}
