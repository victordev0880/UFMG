#include "problema4.h"

float valor_energia(unsigned int consumo, char tipo) {
    float preco_kwh = 0.0f;

    if (tipo == 'R' || tipo == 'r') {
        if (consumo <= 500) {
            preco_kwh = 0.40f;
        } else {
            preco_kwh = 0.65f;
        }
    } else if (tipo == 'C' || tipo == 'c') {
        if (consumo <= 1000) {
            preco_kwh = 0.55f;
        } else {
            preco_kwh = 0.60f;
        }
    } else if (tipo == 'I' || tipo == 'i') {
        if (consumo <= 5000) {
            preco_kwh = 0.30f;
        } else {
            preco_kwh = 0.35f;
        }
    }

    return (float)consumo * preco_kwh;
}
