#include <stdio.h>
#include<string.h>
#define TAM 40
int main(){

    char palavra[TAM], copy[TAM];
    puts("digite uma palavra: ");
    gets(palavra);

    char *prt = palavra;
    int i = 0;

    while(*prt != '\0'){
        copy[i] = *prt;
        i++;
        prt++;
    }
    printf("voce digitou %s", copy);

    return 0;
}