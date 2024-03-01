#include <stdio.h>
int main (){

    int seg, h, m, s;
    puts("digite uma quantidade de segundos: ");
    scanf("%d", &seg);

    h = seg/3600;
    m = seg/60 - h*60;
    s = seg - m*60 - h*3600;

    printf("em %d segundos temos %d horas %d minutos e %d segundos", seg, h, m, s);
    return 0;
}