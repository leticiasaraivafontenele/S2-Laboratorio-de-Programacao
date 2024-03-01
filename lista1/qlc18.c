#include <stdio.h>
int main(){

    float raio;
    printf("digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    printf("diametro: %.2f\ncircunferencia: %.2f\narea: %.2f", raio*2, 2*3.14*raio, 3.14*raio*raio);
    return 0;
}