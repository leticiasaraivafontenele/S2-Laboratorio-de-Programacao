#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define MAX 10

int main(){

    float vetor[TAM][TAM];
    float maior;
    srand(time(NULL));

    for(int i = 0 ; i < TAM; i++){
        for(int j = 0; j< TAM; j++){
            vetor[i][j] = ((float)rand()/RAND_MAX)* MAX;
        }
    }
    for(int m = 0; m < TAM; m++){
        if(m == 0){
            maior = vetor[m][m];
        }else if(vetor[m][m] > maior){
            maior = vetor[m][m];
        }

    }

    for(int x = 0; x < TAM; x++){
        printf("\n");
        for(int z = 0; z< TAM; z++){
            printf(" %.2f ", vetor[x][z]);
        }
    }
    printf("\no maior numero da diagonal principal eh: %.2f", maior);
    return 0;
}