#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGE 100

void gerarvetor(int *, int, int);
void imprimirvetor(int *, int);
int *primeiropar(int *, int);

int main(int argc, char *argv[]){

    if(argc !=2){
        puts("digitou errado");
        exit(1);
    }

    int n = atoi(argv[1]);
    int *poy = NULL;

    if(!(poy = (int*)malloc(n * sizeof(int)))){
        puts("nao ah memoria");
        exit(2);
    }

    gerarvetor(poy, n, RANGE);

    puts("\nvetor gerado: ");
    imprimirvetor(poy, n);

    int *pp = primeiropar(poy, n);

    printf("\no endereco do primeiro par  e o valor sao: [%p]: %d", pp, *pp );

    free(poy);
    return 0;
}

void gerarvetor(int *ponte, int t, int espa){

    srand(time(NULL));
    for (int i = 0; i < t; i++){
        *(ponte + i) = rand()% espa;
    }
}

void imprimirvetor(int *ponte, int t){
    for(int i = 0; i < t; i++){
        printf("\n[%p]: %d", ponte + i, *(ponte + i));
    }
}

int *primeiropar(int *ponte, int t){
    for(int i = 0; i < t; i++){
        if(!(*(ponte + i)%2)) return (ponte + i);
    }
    return NULL;
}