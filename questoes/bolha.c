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
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM - 1; j ++){

            if (vet[j] > vet[j + 1]){
                //troca dedados
                vet[j] =  vet[j] ^ vet[j + 1];
                vet[j + 1] =  vet[j] ^ vet[j + 1];
                vet[j] =  vet[j] ^ vet[j + 1];
            }
        }
    }

    puts("\nvetor gerado DEPOIS da ordenacao");
    for(int i = 0; i < TAM; i++){
        printf("\n[%p]  %d", &vet[i], vet[i]);
    } 
      
    return 0;
}