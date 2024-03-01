#include <stdio.h>
int main(){

    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    printf("o numero anterior e o posterior a %d sao respectivamente: %d e %d", num, num-1, num+1);
    
    return 0;
}