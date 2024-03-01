#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, n3;
    puts ("digite 3 numeros: ");
    scanf("%f, %f, %f", &n1, &n2, &n3);

    printf(" a media aritmetica de %.2f, %.2f e %.2f eh: %.2f \n a media geometrica de %.2f, %.2f e %.2f eh: %.2f", n1, n2, n3, (n1+n2+n3)/3, n1, n2, n3, pow(((double)n1*(double)n2*(double)n3), 0.33333));

    return 0;
}
