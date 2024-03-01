#include <stdio.h>
int main(){

    int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    (!(num%2) ? puts("o numero eh par"): puts("o numero eh impar"));

    return 0;
}