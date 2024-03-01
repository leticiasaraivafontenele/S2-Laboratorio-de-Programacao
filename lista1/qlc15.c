#include <stdio.h>
int main(){

    float di, sa;
    printf("digite o numero de dias trabalhados pelo vendedor: \n");
    scanf("%f", &di);

    sa = (di*50.25)-(di*50.25)*0.1;

    if(di <= 10){
        printf("o valor total a ser pago eh: %.2f (descontando o IRPF)\n", sa);
    }else if(di <= 20){
        printf("o valor total a ser pago eh: %.2f (descontando o IRPF)\n", sa+sa*0.2);
    }else{
        printf("o valor total a ser pago eh: %.2f (descontando o IRPF)\n", sa+sa*0.3);
    }

    return 0;
}