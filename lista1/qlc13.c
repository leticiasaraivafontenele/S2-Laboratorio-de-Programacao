#include <stdio.h>
int main(){

    int a, b, c;
    printf("digite dois numeros: ");
    scanf("%d, %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("substituindo os valores de A por B e B por A temos: %d e %d", a, b);

    return 0;
}