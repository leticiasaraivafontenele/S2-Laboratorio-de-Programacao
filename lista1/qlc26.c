#include <stdio.h>
#include <math.h>

int main(){

    double x1, x2, y1, y2, d;
    puts("digite as coordenadas x, y do primeiro ponto: ");
    scanf("%lf, %lf", &x1, &y1);
    puts("digite as coordenadas x, y do segundo ponto: ");
    scanf("%lf, %lf", &x2, &y2);

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("a distancia entre os dois pontos eh %.2lf", d);

    return 0;
}