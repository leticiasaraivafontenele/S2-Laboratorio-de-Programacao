#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

int main(){

    int *p = NULL;
    int col, lin;

    puts("digite a quantidade de linhas: ");
    scanf("%d", &lin);
    puts("digite a quantidade de colunas: ");
    scanf("%d", &col);

    p = (int*)malloc( col * lin * sizeof(int));

    srand(time(NULL));
    for(int i = 0; i < lin*col; i++){
        *(p + i) = rand()%RANGE;

        if(!(i % col))puts("");

        printf("%5d", *(p+i));
    }

    puts("");

    int elin, ecol;
    puts("digite a linha do elemento a exibir: ");
    scanf("%d", &elin);
    puts("digite a coluna do elemento a exibir: ");
    scanf("%d", &ecol);

    printf("o elemento escolhido foi: %d", *(p + (ecol - 1) + (col* (elin - 1))));


    free(p);

    return 0;
}