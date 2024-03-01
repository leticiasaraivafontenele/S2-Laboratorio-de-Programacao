#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3
#define RANGE 100
int main(){
    srand(time(NULL));
    int vet[TAM];
    int soma = 0;
    float multi = 1;

    for(int i = 0; i < TAM; i++){
        vet[i] = rand()%RANGE;
        soma += vet[i];
        multi *= vet[i];
    }
    puts("no vetor gerado foi");
    for(int i = 0; i < TAM; i++){
        printf(" %d ", vet[i]);
    }

    printf("\na media aritimetica do vetor eh: %.2f\na media geometrica do vetor eh: %.2f", (float)soma/TAM, pow(multi, 1.00/TAM));

    return 0;
}