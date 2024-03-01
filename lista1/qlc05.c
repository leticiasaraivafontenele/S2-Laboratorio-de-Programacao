#include <stdio.h>
int main(){

    float conta;

    printf("digite o valor da conta: ");
    scanf("%f", &conta);

    printf("o valor total a ser pago eh: %.2f", conta+conta*0.1);

    return 0;
}