#include <stdio.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j <  TAM; j++){
            printf("digite o elemento A[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
       }
    }

    for(int i = 0; i < TAM; i++){
        puts("");
        for(int j = 0; j <  TAM; j++){
            printf(" [%d] ", matriz[i][j]);
       }
    }

    puts("\n os elementos da diagonal principal sao: ");
    for(int i = 0; i < TAM; i++){
        printf(" %d ", matriz[i][i]);
    }


    return 0;
}