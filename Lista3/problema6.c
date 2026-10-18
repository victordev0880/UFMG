#include "problema6.h"

void troca(int *end_valor1, int *end_valor2) {
    int temp = *end_valor1;
    *end_valor1 = *end_valor2;
    *end_valor2 = temp;
}
