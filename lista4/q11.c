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

        printf("%5d", *(p+i));

        if(!(i % col))puts("");
    }



    return 0;
}