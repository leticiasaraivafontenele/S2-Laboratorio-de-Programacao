#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RANGE 100

int main(){

    srand(time(NULL));
    int vet[TAM];

    for(int i = 0; i < TAM; i++){
        vet[i] = rand()%RANGE;
        printf(" %d ", vet[i]);
    }

    int *pont = vet;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM - 1; j++){
            if(pont[j] > pont[j + 1]){
                pont[j] = pont[j] ^ pont[j + 1];
                pont[j + 1] = pont[j] ^ pont[j + 1];
                pont[j] = pont[j] ^ pont[j + 1];
            }
        }
    }

    puts("\nvetor ordenado por bolha");
    for(int i = 0; i < TAM; i++){
        printf(" %d ", vet[i]);
    }

    return 0;
}