#include <stdio.h>
#include<string.h>
#define TAM 50
int main(){

    char pa[TAM];
    char cop[TAM];
    puts("digite uma string: ");
    gets(pa);
    //scanf("%[^\n]", pa);
    //fgets(string, TAM, stdin);

    int i = strlen(pa) - 1;
    int j = 0;
    while(i != -1){
        cop[j] = pa[i];
        j++;
        i--;
    }
    printf("o inverso de %s eh %s", pa, cop);

    return 0;
}