#include <stdio.h>
int main(){

    float c;

    printf("digite a temperatura em celsius: ");
    scanf("%f", &c);

    printf("%.1f graus celsios equilavem a %.1f graus fahrenheit", c, (9*c+160)/5);

    return 0;
}