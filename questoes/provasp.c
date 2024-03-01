#include <stdio.h>
int main (){

     int c, p, i;
     float so;

     for(i = 1; i <= 3; i++){
        printf("digite o P%i: ", i );
        scanf("%d", &p);
        printf("digite o C%i: ", i );
        scanf("%d", &c);
        so = so + (float)c/(float)p;
     }

    so > 1 ? printf("o sistema nao eh escalonavel") : printf("o sistema eh escalonavel");

    return 0;
}