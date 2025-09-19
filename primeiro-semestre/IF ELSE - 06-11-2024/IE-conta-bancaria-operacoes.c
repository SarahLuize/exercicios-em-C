#include <stdio.h>
#include <stdlib.h>

//ATIVIDADE 21 - Conta banc�ria.
int main()
{
    float saldo, valOperacao, novoSaldo;
    char operacao;

    printf("Informe o saldo da conta: R$\n");
    scanf("%f", &saldo);

    printf("Informe a opera��o (D para Dep�sito, S para Saque): \n");
    scanf(" %c", &operacao);

    printf("Informe o valor da opera��o: R$\n");
    scanf("%f", &valOperacao);

    if (operacao == 'D')
    {
        // Opera��o de dep�sito
        novoSaldo = saldo + valOperacao;
    }
    else if (operacao == 'S')
    {
        // Opera��o de saque
        novoSaldo = saldo - valOperacao;
    }
    else
    {
        // Opera��o inv�lida
        printf("Opera��o Inv�lida\n");
        return 1;
    }


    if (novoSaldo < 0)
    {
        printf("Saldo: R$ %.2f - SALDO DEVEDOR\n", novoSaldo);
    }
    else if (novoSaldo == 0)
    {
        printf("Saldo: R$ %.2f - ZERADO\n", novoSaldo);
    }
    else
    {
        printf("Saldo: R$ %.2f\n", novoSaldo);
    }
    return 0;
}
