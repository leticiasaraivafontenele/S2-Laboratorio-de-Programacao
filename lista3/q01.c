#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15
int main(){
    srand(time(NULL));
    float v[TAM];
    float maior, menor;

    for(int i = 0; i < TAM; i++){
        v[i] = ((float)(rand()%10000))/100;
    }

    for(int i = 0; i < TAM; i++){
        if(!i){
            maior = v[0];
            menor = v[0];
        }else if (v[i] < menor){
            menor = v[i];
        }else if(v[i] > maior){
            maior = v[i];
        }
    }

    for(int i = 0; i < TAM; i++){
        printf(" %.2f ", v[i]);
    }

    printf("\no maior valor gerado foi: %.2f\no menor valor gerado foi %.2f\n", maior, menor);

    return 0;
}