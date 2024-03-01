#include <stdio.h>
int main(){

    int c, l, a;

    printf("digite o comprimento, a largura e a altura da caixa: ");
    scanf("%d, %d, %d", &c, &l, &a);
    
    printf("o volume de uma caixa de dimensoes %d x %d x %d eh: %d", c, l, a, c*l*a);

    return 0;
}