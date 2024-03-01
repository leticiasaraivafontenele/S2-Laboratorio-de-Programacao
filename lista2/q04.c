#include <stdio.h>
int main(){

    int jose = 150, pedro = 110, i;

    for(i = 0 ; jose >= pedro; i++){
        jose += 2;
        pedro += 3;
    }
    printf("Pedro sera maior que Jose em %d anos", i);
    return 0;
}