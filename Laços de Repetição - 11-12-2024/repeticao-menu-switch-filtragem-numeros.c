#include<stdio.h>

void main(){
    int num1, num2;
    int op;
    int menor, maior;

    printf("Entre com dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        menor = num2;
        maior = num1;
    }else{
        menor = num1;
        maior = num2;
    }

    menu2(menor, maior);
}

int menu1(){
    int op;

    printf(" MENU DE OPCOES \n");
    printf(" ------------------------ \n");
    printf(" 1) Ordem crescente \n");
    printf(" 2) Ordem decrescente \n");
    printf(" ------------------------ \n");
    printf(" Escolha uma opcao: ");
    scanf("%d", &op);

    switch(op){
    case 1:
        printf(" Ordem crescente!\n");
        break;
    case 2:
        printf(" Ordem DEcrescente!\n");
        break;
    default:
        printf(" A opcao escolhida nao existe!\n");
    }

    return op;
}

void menu2(int a, int b){
    int op;

    int opOrdem = menu1();

    printf(" MENU DE OPCOES \n");
    printf(" ------------------------ \n");
    printf(" 1) Somente impares \n");
    printf(" 2) Somente pares \n");
    printf(" 3) Somente positivos \n");
    printf(" 4) Somente negativos \n");
    printf(" ------------------------ \n");
    printf(" Escolha uma opcao: ");
    scanf("%d", &op);

    switch(op){
    case 1:
        if(opOrdem == 1)
            somenteImparesCrescente(a, b);
        else
            somenteImparesDecrescente(a, b);
        break;
    case 2:
        if(opOrdem == 1)
            somenteParesCrescente(a, b);
        else
            somenteParesDecrescente(a, b);
        break;
    case 3:
        if(opOrdem == 1)
            somentePositivosCrescente(a, b);
        else
            somentePositivosDecrescente(a, b);
        break;
    case 4:
        if(opOrdem == 1)
            somenteNegativosCrescente(a, b);
        else
            somenteNegativosDecrescente(a, b);
        break;
    default:
        printf(" A opcao escolhida nao existe!\n");
    }
}

// IMPARES
void somenteImparesCrescente(int a, int b){
    int cont;

    for(cont = a; cont <= b; cont++){
        if(cont % 2 != 0)
            printf("%d ", cont);
    }
}

void somenteImparesDecrescente(int a, int b){
    int cont;
    for(cont = b; cont >= a; cont--){
        if(cont % 2 != 0)
            printf("%d ", cont);
        }
}

// PARES
void somenteParesCrescente(int a, int b){
    int cont;

    for(cont = a; cont <= b; cont++){
        if(cont % 2 == 0)
            printf("%d ", cont);
    }
}

void somenteParesDecrescente(int a, int b){
    int cont;
    for(cont = b; cont >= a; cont--){
        if(cont % 2 == 0)
            printf("%d ", cont);
        }
}

// POSITIVOS
void somentePositivosCrescente(int a, int b){
    int cont;

    for(cont = a; cont <= b; cont++){
        if(cont > 0)
            printf("%d ", cont);
    }
}

void somentePositivosDecrescente(int a, int b){
    int cont;
    for(cont = b; cont >= a; cont--){
        if(cont > 0)
            printf("%d ", cont);
        }
}

// NEGATIVOS
void somenteNegativosCrescente(int a, int b){
    int cont;

    for(cont = a; cont <= b; cont++){
        if(cont < 0)
            printf("%d ", cont);
    }
}

void somenteNegativosDecrescente(int a, int b){
    int cont;
    for(cont = b; cont >= a; cont--){
        if(cont < 0)
            printf("%d ", cont);
        }
}
