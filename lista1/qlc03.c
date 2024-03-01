#include <stdio.h>
int main(){

    float num;

    printf("digite um valor real: \n");
    scanf("%f", &num);

    printf("%f tratado fica: %.1f", num, num);

    return 0;
}