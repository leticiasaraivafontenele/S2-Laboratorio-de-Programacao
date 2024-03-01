#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 7
#define TAM 10
int main(){
    srand(time(NULL));

    int vetx[TAM];
    for(int i = 0; i < TAM; i++){
        vetx[i] = rand()%N;
    }

    int vetf[N];
    for(int i = 0; i < N; i++){
        vetf[i] = 0;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < TAM; j++){
            if(vetx[j] == i ) vetf[i] += 1;
        }
    }

    for(int i = 0; i < TAM; i++){
        printf(" %d ", vetx[i]);
    }
    puts("\n");
    for(int i = 0; i < N; i++){
        printf(" %d ", vetf[i]);
    }

    return 0;
}