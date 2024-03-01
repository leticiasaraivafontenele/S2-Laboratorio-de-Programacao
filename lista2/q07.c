#include <stdio.h>
int main(){

    int divi = 0, dendo;
    puts("digite o dividendo: ");
    scanf("%d", &dendo );

    while (!divi){
        puts("digite o divisor: ");
        scanf("%d", &divi );
    }

    printf("%d dividido por %d eh: %.2f ", dendo, divi, (float)dendo/divi);

    return 0;
}