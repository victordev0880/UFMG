#include "problema5.h"

float estacionamento(unsigned short h_e, unsigned short m_e, unsigned short h_s, unsigned short m_s) {
    int minutos_entrada = h_e * 60 + m_e;
    int minutos_saida = h_s * 60 + m_s;
    int duracao_minutos = minutos_saida - minutos_entrada;

    if (duracao_minutos <= 0) {
        duracao_minutos += 24 * 60;
    }

    int horas = (duracao_minutos + 59) / 60;
    float tarifa;

    if (horas <= 2) {
        tarifa = 1.00f;
    } else if (horas <= 4) {
        tarifa = 1.40f;
    } else {
        tarifa = 2.00f;
    }

    return (float)horas * tarifa;
}
