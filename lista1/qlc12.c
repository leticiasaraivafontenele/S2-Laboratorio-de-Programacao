#include <stdio.h>
int main(){

    int a, b;

    printf("digite dois numeros: ");
    scanf("%d, %d", &a, &b);

    printf("a soma, o produto, a diferenca, o quociente e o resto da divisao de %d por %d sao respectivamente:\n %d, %d, %d, %.2f, %d", a, b, a+b, a*b, a-b, (float)a/b, a%b);

    return 0;
}