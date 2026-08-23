#include <math.h>
#include <stdio.h>

int main() {
    float minutos, segundos;
    int horas;

    scanf("%f", &minutos);

    horas = minutos/60;
    segundos = (minutos - (int)minutos) *60;
    minutos = (int)minutos % 60;

    printf("Valor convertido: %d h %d min %.1f s", horas, (int)minutos, segundos);


    return 0;

}