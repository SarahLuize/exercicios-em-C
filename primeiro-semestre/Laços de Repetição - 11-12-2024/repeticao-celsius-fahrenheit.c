#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define CONST01 1.8
#define CONST02 32

// Revisão de laço de repetição - for
// Transformar graus celsius em graus fahrenheit

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int celsius, fahrenheit;

    for(celsius = 50; celsius <= 150; celsius++){
        fahrenheit = (celsius * CONST01) + CONST02;
        printf("\n %d°C --> %d°F", celsius, fahrenheit);
    }
}
