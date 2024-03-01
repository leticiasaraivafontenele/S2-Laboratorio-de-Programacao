#include <stdio.h>
#define TAM 5
int main(){

    int vet[TAM];
    int *p = NULL;
    p = vet;
    for(int i = 0; i < TAM; i++ ){
        printf("digite o %d@ elemento do vetor: ", i + 1);
        scanf("%d", (p + i) );
    }

    for(int i = 0; i < TAM; i++){
        printf("\n [%p]: %d", p + i, *(p+ i));
    }

    return 0;
}