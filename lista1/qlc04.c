#include <stdio.h>
int main(){

    int x;
    printf("digite um numero: ");
    scanf("%d", &x);

    printf("o tripo, o quadrado e o meio de %d sao respectivamente: %d, %d, %.2f \n", x, x*3, x*x, (float)x/2 );

    return 0;
}