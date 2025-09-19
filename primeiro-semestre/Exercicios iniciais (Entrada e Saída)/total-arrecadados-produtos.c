#include <stdio.h>
#include<locale.h>

//ATIVIDADE4


int main()
{
   setlocale(LC_CTYPE,"");

   float prodvalor1, prodvalor2, prodvalor3, prodvalor4, total1, total2, total3, total4;
   int prodvendido1, prodvendido2, prodvendido3, prodvendido4;

    printf("Insira valor do produto 1: \n");
    scanf("%f", &prodvalor1);

    printf("Quantidade de vendas do produto 1: \n");
    scanf("%d", &prodvendido1);

    printf("Insira valor do produto 2: \n");
    scanf("%f", &prodvalor2);

    printf("Quantidade de vendas do produto 2: \n");
    scanf("%d", &prodvendido2);

    printf("Insira valor do produto 3: \n");
    scanf("%f", &prodvalor3);

    printf("Quantidade de vendas do produto 3: \n");
    scanf("%d", &prodvendido3);


    printf("Insira valor do produto 4: \n");
    scanf("%f", &prodvalor4);

    printf("Quantidade de vendas do produto 4: \n");
    scanf("%d", &prodvendido4);

    total1 = prodvalor1 * prodvendido1;
    total2 = prodvalor2 * prodvendido2;
    total3 = prodvalor3 * prodvendido3;
    total4 = prodvalor4 * prodvendido4;

   printf("Total arrecadado - Produto1 : %.2f \n" , total1);
   printf("Produto2 : %.2f \n", total2);
   printf("Produto3 : %.2f \n", total3);
   printf(" Produto4 : %.2f \n", total4);

    return 0;
}
