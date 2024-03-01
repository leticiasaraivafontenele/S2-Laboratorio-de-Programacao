#include <stdio.h>
int main(){

    int paulo = 0, renata = 0, nulos = 0, brancos = 0, i = 1, voto;

    while(i){
        puts("digite seu voto(negativo p/ sair): ");
        scanf("%d", &voto);
        if (voto >= 0){
            switch (voto){
                case 7:
                    renata += 1;
                    puts("voto computado");
                    break;
                case 5:
                    paulo += 1;  
                    puts("voto computado "); 
                    break;
                case 0:
                    brancos += 1;
                    puts("voto computado");  
                    break;       
            default:
                puts("voto nulo computado");
                nulos += 1;
                break;
            }
        }else{i = 0;}
    }
    printf("\nRenata: %d votos\nPaulo: %d votos\nBrancos: %d\nNulos: %d votos\n", renata, paulo, brancos, nulos);
    return 0;
}