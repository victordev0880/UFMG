#include <math.h>
#include <stdio.h>
int main (){
    int segundos, minutos, horas;

    printf("Digite o valor do tempo em segundos:");
    scanf("%d", &segundos);

    minutos = segundos/60;
    segundos = segundos - (minutos*60);

    horas = minutos/60;
    minutos = minutos - (horas*60);

    printf("Valor convertido: %2d h %2d min %2d seg", horas, minutos, segundos);
    

    return 0;
}

