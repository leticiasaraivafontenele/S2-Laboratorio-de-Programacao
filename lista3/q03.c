#include <stdio.h>
#define TAM 30
int main(){

    char string[TAM];
    puts("digite uma string: ");
    scanf("%[^\n]", string);
    //fgets(string, TAM, stdin);

    int i = 0;
    while(string[i] != '\0') i++ ;

    printf("a palavra %s tem %d caracteres", string, i - 1);

    return 0;
}