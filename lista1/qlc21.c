#include <stdio.h>
int main(){

    int num1, num2;
    printf("digite 2 numeros: ");
    scanf("%d, %d", &num1, &num2);

    (!(num1%num2) ? printf("%d eh multiplo de %d", num1, num2) : printf("%d nao eh multiplo de %d", num1, num2));

    return 0;
}