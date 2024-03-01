#include <stdio.h>
#include <string.h>
#define TAM 30
int main(){

    char palavra[TAM];
    char carac;

    puts("\ndigite uma palavra: ");
    fgets(palavra, TAM, stdin);

    puts("\ndigite um caracter: ");
    scanf("%c", &carac);
    
    strchr(palavra, carac) ? printf("o caracter '%c' aparece na palavra '%s'", carac, palavra) : printf("o caracter '%c' nao aparece na palavra '%s'", carac, palavra);

    return 0;
}