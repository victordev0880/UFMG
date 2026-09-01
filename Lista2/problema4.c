#include <stdio.h>

int main() {

    float salario;
    float vda;
    float novo_salario;

    printf("Digite o valor do salario:");
    scanf("%f", &salario);

    if(salario<=280) {
        novo_salario = salario * 6/5;
        vda = (novo_salario) - salario;
    } else if(salario>280 && salario<=700) {
        novo_salario = salario * 23/20;
        vda = (novo_salario) - salario;
    } else if(salario>700 && salario<=1500) {
        novo_salario = salario * 11/10;
        vda = (novo_salario) - salario;
    } else if(salario>1500) {
        novo_salario = salario * 21/20;
        vda = (novo_salario) - salario;
    }

    printf("Valor do aumento: %.2f\n", vda);
    printf("Valor do aumento: %.2f", novo_salario);
     

    return 0;
}