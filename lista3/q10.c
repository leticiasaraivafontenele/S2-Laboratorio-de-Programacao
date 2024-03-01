#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
#define RANGE 10

int main(){

    srand(time(NULL));
    int x, cont = 0;
    int matriz[TAM][TAM];

    puts("digite um numero: ");
    scanf("%d", &x);

    for(int i = 0; i < TAM; i++){
        puts("");
        for(int j = 0; j < TAM; j++){
            matriz[i][j] = rand()%RANGE;
            printf(" [%d] ", matriz[i][j]);

            if(matriz[i][j] == x) cont++;
        }
    }
    printf("\no numero %d aparece %d vezes na matriz", x, cont);

    return 0;
}