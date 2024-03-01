#include <stdio.h>
int main(){

    int num;

    printf("digite um numero decimal: \n");
    scanf("%d", &num);
    getchar();

    printf("%d em hexadecimal eh: %x \n", num, num);
    printf("%d em octal eh: %o \n", num, num);

    return 0;
}