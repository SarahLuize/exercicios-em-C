#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, potencia, rquad;

    printf("Calculo de potencia e raiz\n");

    printf("Digite primeiro numero: \n");
    scanf("%f", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);

    //CALCULO

    potencia =  (double) pow(num1, num2);
    rquad = sqrt(num1);


    //RESULTADO
    printf("Potencia: %0.f\n", potencia);
    printf("Raiz quadrada: %f\n", rquad);



    return 0;
}
