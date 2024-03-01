#include <stdio.h>
#include <string.h>
#define TAM 40
int main(){

    char palavra[TAM];
    puts("digite uma palavra: ");
    gets(palavra);

    char *pom = palavra;
    int cont = 0;

    while(*pom != '\0'){
        cont++;
        pom++;
    }

    printf("%s tem %d caracteres", palavra, cont);

    return 0;
}