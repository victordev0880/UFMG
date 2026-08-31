#include <math.h>
#include <stdio.h>

int main() {
    float v0, a, t;
    
    printf("Digite o valor da velocidade:");
    scanf("%f", &v0);
    printf("Digite o valor da aceleracao:");
    scanf("%f", &a);
    printf("Digite o valor do tempo:");
    scanf("%f", &t);

    float velocidade_final = v0 + a * t;
    float distancia_percorrida = v0 * t + (1.0/2.0) * a * pow(t, 2);

    printf("Velocidade final: %.2f\n", velocidade_final);
    printf("Distancia percorrida: %.2f\n", distancia_percorrida);

    return 0;
}