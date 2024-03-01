#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    unsigned char armarios = 0;
    int n = 1, op;
    srand(time(NULL));

    while(n){
        puts("\n\nARMARIOS\n--------------------\ndigite uma opcao: \n1. ocupar armario\n2. liberar armario\n3. sair\n--------------------");
        scanf("%d", &op);

        unsigned char mask = 1, printar;
        int m = 1, arm;

        switch(op){
            case 1:
                while(m){
                    arm = rand()%8;
                    mask = mask << arm;
                    if(!(armarios&mask)){
                        armarios = armarios^mask;
                        printf("seu armario eh o %d\n", arm + 1);
                        m = 0;
                    }
                }
                for(int i = 0; i < 8; i++){
                    printar = armarios;
                    printar = printar>>i;
                    printf(" %d ", armarios%2);
                }
                break;

            case 2:
                puts("\nqual armario gostaria de liberar: ");
                scanf("%d", &arm);
                mask = mask<<arm;
                if(armarios&mask)(armarios = armarios^mask);
                printf("\narmario %d livre\n", arm);

                for(int i = 0; i < 8; i++){
                    printar = armarios;
                    printar = printar>>i;
                    printf(" %d ", armarios%2);
                }
                break;

            case 3:
                n = 0;
                puts("\nprograma encerrado! bay!");
                break;

            default:
                puts("\nopcao invalida!");
                break;     
        }
    }

    return 0;
}