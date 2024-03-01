#include <stdio.h>
#include<string.h>
#define TAM 40
int main(){

    char palavra[TAM];
    char x;
    puts("digite uma palavra: ");
    gets(palavra);
    puts("digite um caracter: ");
    scanf("%c", &x);

    char *pont = palavra;
    int cont = 0; 
    while(*pont != '\0'){
        if(*pont == x) cont += 1; 
        pont++;
    }

    printf("o caracter %c aparece %d vezes na palavra %s", x, cont, palavra);

    return 0;
}