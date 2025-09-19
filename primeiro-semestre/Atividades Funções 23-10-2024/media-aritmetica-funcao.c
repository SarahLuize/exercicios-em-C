#include <stdio.h>
#include <stdlib.h>

int mAritm (int A, int B) {
   return (A + B) / 2;
}

int main()
{

   int A, B, media;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &A, &B);

    media = mAritm(A, B);

    printf("Media aritmetica: %d\n", media);
    return 0;
}
