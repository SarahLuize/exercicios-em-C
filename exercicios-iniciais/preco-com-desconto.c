#include <stdio.h>
#include<locale.h>

int main()
{

   setlocale(LC_CTYPE,"");

   float valorProd, desconto, promoProd;

    printf("Insira valor do produto: \n");
    scanf("%f", &valorProd);

    printf("Insira valor do desconto: \n");
    scanf("%f", &desconto);

    promoProd = valorProd * (desconto/100);

    printf("Produto A, com desconto de %.0f, R$ %.2f\n", desconto, promoProd);


    return 0;
}
