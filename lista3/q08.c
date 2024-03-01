#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(){
    srand(time(NULL));
    int range;
    int vet[TAM];

    puts("digite o range do vetor: ");
    scanf("%d", &range);

    for(int i = 0; i < TAM; i++){
        vet[i] = rand()%range;
    }

    puts("\nvetor gerado: ");
    for(int i = 0; i < TAM; i++){
        printf(" %d ", vet[i]);
    }
    //ordenação por seleção
    /*for(int i = 0; i < TAM - 1; i++){
        for(int j = i + 1; j < TAM; j++){
            if(vet[i] > vet[j]){
                vet[i] = vet[i] ^ vet[j];
                vet[j] = vet[i] ^ vet[j];
                vet[i] = vet[i] ^ vet[j];
            }
        }
    }*/

    //ordenação tipo bolha
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM - 1; j++){
            if(vet[j] > vet[j + 1]){
                vet[j] = vet[j] ^ vet[j+1];
                vet[j+1] = vet[j] ^ vet[j+1];
                vet[j] = vet[j] ^ vet[j+1];
            }
        }
    }


    puts("\nvetor ordenado: ");
    for(int i = 0; i < TAM; i++){
        printf(" %d ", vet[i]);
    }

    return 0;
}