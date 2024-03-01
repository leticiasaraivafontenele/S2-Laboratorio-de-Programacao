#include <stdio.h>
int main(){

    int num, i = 0;

    while(i == 0){
        puts("digite um numero correspondente a um dia da semana(0 para sair): ");
        scanf("%d", &num);

        if(num){
            switch (num){
                case 1:
                    puts("1 = domingo\n");
                    break;
                case 2:
                    puts("2 = segunda\n");
                    break;
                case 3:
                    puts("3 = terca\n");
                    break;
                case 4:
                    puts("4 = quarta\n");
                    break;
                case 5:
                    puts("5 = quinta\n");
                    break;
                case 6:
                    puts("6 = sexta\n");
                    break;
                case 7:
                    puts("7 = sabado\n");
                    break;
                default:
                    puts("opcao invalida\n");
                    break;
            }
        }else {
            puts("bayy\n");
            i = 1;
        }
    }
    return 0;
}