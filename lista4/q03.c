#include <stdio.h>
int main(){

    int maior, x;
    int *pmaior = &maior, *px = &x;

    int e = 1;
    for(int i = 0; e ; i++){
        puts("\ndigite um numero(0 p/sair): ");
        scanf("%d", px);

        if( !i ){
            *pmaior = *px;
            }else if((!*px)){
                e = 0;
                }else if(*px >= *pmaior){*pmaior = *px;}

        printf("\no maior numero digitado ate agora foi %d", *pmaior);
    }

    return 0;
}