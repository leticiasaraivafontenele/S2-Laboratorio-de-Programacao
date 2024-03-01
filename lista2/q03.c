#include <stdio.h>
int main(){

    unsigned int f, re;

    puts("digite um numero: ");
    scanf("%u", &f);
    re = f;

    for( int i = f - 1; i > 0; i-- ){
        re *= i;
    }
    
    printf("o fatorial de %u eh %u", f, re);
    return 0;
}