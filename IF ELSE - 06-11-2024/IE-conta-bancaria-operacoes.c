#include <stdio.h>
#include <stdlib.h>

//ATIVIDADE 21 - Conta bancária.
int main()
{
    float saldo, valOperacao, novoSaldo;
    char operacao;

    printf("Informe o saldo da conta: R$\n");
    scanf("%f", &saldo);

    printf("Informe a operação (D para Depósito, S para Saque): \n");
    scanf(" %c", &operacao);

    printf("Informe o valor da operação: R$\n");
    scanf("%f", &valOperacao);

    if (operacao == 'D')
    {
        // Operação de depósito
        novoSaldo = saldo + valOperacao;
    }
    else if (operacao == 'S')
    {
        // Operação de saque
        novoSaldo = saldo - valOperacao;
    }
    else
    {
        // Operação inválida
        printf("Operação Inválida\n");
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
