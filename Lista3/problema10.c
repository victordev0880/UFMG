#include "problema10.h"

void valida_data(int dia, int mes, int ano, int *end_valida, int *end_bissexto) {
    int bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
    *end_bissexto = bissexto ? 1 : 0;

    if (mes < 1 || mes > 12) {
        *end_valida = 0;
        return;
    }

    int dias_no_mes;
    if (mes == 2) {
        dias_no_mes = bissexto ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias_no_mes = 30;
    } else {
        dias_no_mes = 31;
    }

    if (dia >= 1 && dia <= dias_no_mes) {
        *end_valida = 1;
    } else {
        *end_valida = 0;
    }
}
