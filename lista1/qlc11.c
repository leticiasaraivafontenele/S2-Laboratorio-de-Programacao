#include <stdio.h>
int main(){

    float valor, dolar;

    printf("digite o valor em reais que deseja converter: ");
    scanf("%f", &valor);
    printf("digite o valor da cotaçao atual do dolar: ");
    scanf("%f", &dolar);

    printf("%.2f reais na cotaçao atual vale %.2f dolares", valor, valor/dolar);

    return 0;
}