#include <stdio.h>
#include <string.h>
#define TAM 40

int main(){

    char p1[TAM];
    char p2[TAM];

    puts("digite uma palavra: ");
    gets(p1);
    puts("digite outra palavra: ");
    gets(p2);

    char *pont = p2;
    int i = strlen(p1);

    while(*pont != '\0'){
        p1[i] = *pont;
        i++;
        pont++;

    }

    printf("as strings concatenadas fica: %s", p1);

    return 0;
}