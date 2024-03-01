#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define RANGE 100

int main(){
    int n;
    int *pu = NULL;

    puts("digite a quantidade de elementos: ");
    scanf("%d", &n);

    if(!(pu = (int*)malloc(n* sizeof(int)))){
        puts("memoria indisponivel!");
        exit(1);
    }

    srand(time(NULL));
    for(int k = 0; k < n; k ++){
        *(pu + k) = rand()%RANGE;
    }

    int **pzao = NULL;

    pzao = (int**)malloc(2*sizeof(int*));
    **pzao = *(*(pzao + 1)) = *pu;

    for(int i = 0; i < n; i++){
        if(**pzao < *(pu + i)) **pzao = *(pu + i);
        if(*(*(pzao + 1))> *(pu + i)) *(*(pzao + 1)) = *(pu + i); 

        printf(" %d ", *(pu + i));
    }
    printf("\n o maior eh: %d\no menor eh: %d", **pzao, *(*(pzao + 1)));

    free(pu); 
    free(pzao[0]);
    free(pzao[1]);
    free(pzao);
    return 0;
}