#include <stdio.h>
#include <locale.h>

void main() {
    int cont;
    setlocale(LC_ALL, "Portuguese");

    for (cont = 0; cont < 4; cont++) {
        printf("Ol� mundo!\n");
        printf("\n");
    }
}
