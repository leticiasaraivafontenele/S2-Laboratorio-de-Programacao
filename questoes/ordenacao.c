#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6

int main(){

    int vet[TAM];
    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        vet[i] = rand() % 100;
    }

    puts("\nvetor gerado antes da ordenacao");
    for(int i = 0; i < TAM; i++){
        printf("\n[%p]  %d", &vet[i], vet[i]); 
    }  
    
    for(int i = 0; i < TAM -1; i++){
        for(int j = i +1; j < TAM; j++){
            if (vet[i] > vet[j]){

                vet[i] =  vet[i] ^ vet[j];
                vet[j] =  vet[i] ^ vet[j];
                vet[i] =  vet[i] ^ vet[j];
            }
        }
    }

    puts("\nvetor gerado DEPOIS da ordenacao");
    for(int i = 0; i < TAM; i++){
        printf("\n[%p]  %d", &vet[i], vet[i]);
    } 
      
    return 0;
}