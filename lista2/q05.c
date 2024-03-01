#include <stdio.h>
int main(){

    int n, maior, menor;
    
    for(int i = 1; n != 0; i++){
        puts("digite um numero(0 p/ sair): ");
        scanf("%d", &n);
        
        if(i == 1){
            maior = n;
            menor = n;
         }else if(n > maior){
            maior = n;
         }else if(n < menor){
            menor = n;
         }
        printf("o maior valor digitado foi: %d\n", maior);
        printf("o menor valor digitado foi: %d\n", menor);
    }

    return 0;
}