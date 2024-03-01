#include <stdio.h>
int main(){

    float ha, ho, inss, sa;

    printf("digite o valor da hora aula, a quantidade de horas trabalhadas no mes do professor, e o percentual de desconto do inss: ");
    scanf("%f, %f, %f", &ha, &ho, &inss);

    sa = ho*ha;
    printf("Salario bruto: %.2f \nSalario liquido(INSS) %.2f ", sa, sa-sa*inss);

    return 0;
}