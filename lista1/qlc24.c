#include <stdio.h>
#include <math.h>
int main (){

    int x, y;
    puts("digite dois numeros: ");
    scanf("%d, %d", &x, &y);

    printf("%d multiplicado por 2 elevado a %d eh %.2lf", x, y, x*pow(2, (double)y) );
    return 0;
}