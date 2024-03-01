#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGE 100
#define LIN 3
#define COL 4
int main(){

    int *m[LIN];
    int lin1[COL], lin2[COL], lin3[COL];

    m[0] = lin1;
    m[1] = lin2;
    m[2] = lin3;

    srand(time(NULL));

    //m aponta pros vetores m's, m aponta pro vetor m[0] e m + 2 aponta pro vetor m[2]
    //ou seja oq * m + 1 aponta pro primeiro elemento do vetor m[1]
    // entao *(*(m + 1) + 2) aponta pro terceiro elemento do vetor m[1]

    for(int i = 0; i < LIN; i++){
        for(int k = 0; k < COL; k++){
                (*(*(m + i)) + k) = rand() % RANGE; 

            if(!(k%COL))puts("");

            printf("%5d", *(*(m + i)+ k));
        }
    }

    return 0;
}