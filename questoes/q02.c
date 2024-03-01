#include <stdio.h>
int main (){

    int x; 
    unsigned char mask = 1;

    printf("digite o codigo de 8 bits: ");
    scanf("%d", &x);

    for(int i = 1; i <= 8; i++){
       (x >> i) & mask? printf(" o equipamento %d esta ligado\n", i) : printf(" o equipamento %d esta desligado\n", i);
    }

    return 0;
}