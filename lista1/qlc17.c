#include <stdio.h>
#include <stdlib.h>
int main(){

    int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    printf("o modulo de %d eh: %d ", num, abs(num));
    return 0;
}