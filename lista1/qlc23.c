#include <stdio.h>
int main(){

    int num, nov;
    printf("digite um numero de 3 digitos: ");
    scanf("%d", &num);

    nov = ((num%10)*100) + (((num%100)/10)*10) + (num/100);
    printf("%d invertido eh %d", num, nov);
    return 0;
}