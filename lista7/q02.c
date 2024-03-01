#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *pf;
    char sti[30];
    char str[30];
    int cont = 0;

    if((pf = fopen("teste", "w+"))== NULL){
        puts("o arquivo nn pode ser aberto");
        exit(1);
    }
    do{
        puts("digite uma string");
        fgets(sti, 30, stdin);
        strcat(sti, "\n");

        cont++;

        fputs(sti, pf);
        

    }while(*sti != '\n');

    rewind(pf);
    
    fread(&str, sizeof(sti), cont, pf);
    printf("%s", str);

    fclose(pf);
    return 0;

}