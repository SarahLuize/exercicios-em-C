#include <stdio.h>
#include <stdlib.h>

void mAritm (int A, int B) {
   return (A + B) / 2;
}


int main()
{

   int A, B, mAritm;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &A, &B);

    mAritm = (A + B) / 2;

    printf("Media aritmética: %d\n", mAritm);
    return 0;
}
