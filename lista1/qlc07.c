#include <stdio.h>
int main(){

    int h, m, s;

    printf("digite a hora, os minutos e os segundos:");
    scanf("%d, %d, %d",&h, &m, &s);

    printf("ao total se passaram %d segundos", h*3600+m*60+s);
    return 0;
}