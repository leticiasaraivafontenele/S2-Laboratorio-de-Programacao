#include <stdio.h>
#include <string.h>
#define TAM 30
int main(){

    char p1[TAM];
    char p2[TAM];

    puts("\ndigite uma palavra: ");
    fgets(p1, TAM, stdin);

    puts("\ndigite outra palavra: ");
    fgets(p2, TAM, stdin);

    //!strcmp(p1, p2) ? puts("as duas strings sao iguais") : puts("as duas strings sao diferentes");
    +
    int i = 0, cont = 0;
    while(p1[i] != '\0'){
        i++;
        if (p2[i] != p1[i]) cont = 1;
    }
    !cont ? puts("as duas strings sao iguais") : puts("as duas strings sao diferentes");

    return 0;
}