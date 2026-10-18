#include <stdio.h>

int main() {

    int dia, mes, ano;
    int dias_no_mes;
    int bissexto;

    printf("Digite a data: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);

    if (mes < 1 || mes > 12) {
        printf("Data invalida\n");
        return 0;
    }

    if (mes == 2) {
        dias_no_mes = bissexto ? 29 : 28;
    } else if (mes == 4 || mes == 6 ||
               mes == 9 || mes == 11) {
        dias_no_mes = 30;
    } else {
        dias_no_mes = 31;
    }

    if (dia >= 1 && dia <= dias_no_mes) {
        printf("Data valida\n");
    } else {
        printf("Data invalida\n");
    }


    return 0;
}
