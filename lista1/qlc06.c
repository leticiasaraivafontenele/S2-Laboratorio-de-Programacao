#include <stdio.h>
int main(){

    float alto;
    char sexo;

    printf("digite seu sexo (m/f): ");
    scanf("%c", &sexo);
    printf("digite sua altura: ");
    scanf("%f", &alto);

    if(&sexo == "m")(
        printf("seu peso ideal eh: %.2fkg", 72.7*alto-58 ));
    else
        printf("seu peso ideal eh: %.2fkg", 62.1*alto-44.7 );

    return 0;
}