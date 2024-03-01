#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *pf;
    char sti[30];
    char str[30];

    if((pf = fopen("teste", "w+"))== NULL){
        puts("o arquivo nn pode ser aberto");
        exit(1);
    }
    do{
        puts("digite uma string");
        fgets(sti, 30, stdin);
        strcat(sti, "\n");

        fputs(sti, pf);

    }while(*sti != '\n');


    fclose(pf);
    return 0;

}