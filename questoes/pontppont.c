#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

int main(){

    int **p = NULL;
    int col, lin;

    puts("digite a quantidade de linhas: ");
    scanf("%d", &lin);
    puts("digite a quantidade de colunas: ");
    scanf("%d", &col);

    /*if(!(p = (int)malloc( vari * sizeof(int)))){
        puts("nao ha memoria disponvel");
        exit(1);
    }*/

    p = (int**)malloc( lin * sizeof(int*));

    for(int k = 0 ; k < lin; k++){
        p[k] = (int*)malloc(col* sizeof(int));
    }

    srand(time(NULL));
    for(int i = 0; i < lin; i++){
        puts("");
        for(int k = 0; k < col; k++){
            *(*(p + i) + k) = rand()%RANGE;

            printf("%5d", *(*(p+i)+ k));
        }
    }

    puts("");

    int elin, ecol;
    puts("digite a linha do elemento a exibir: ");
    scanf("%d", &elin);
    puts("digite a coluna do elemento a exibir: ");
    scanf("%d", &ecol);

    printf("o elemento escolhido foi: %d", *(*(p + (elin - 1)) + ecol - 1));


    for(int k = 0 ; k < lin; k++){
        free(p[k]);
    }

    free(p);

    return 0;
}