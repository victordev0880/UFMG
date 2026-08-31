#include <math.h>
#include <stdio.h>

int main() {

    int velocidade_maxima, velocidade_registrada;

    printf("Digite o valor da velocidade maxima: ");
    scanf("%d", &velocidade_maxima);

    printf("Digite o valor da velocidade registrada: ");
    scanf("%d", &velocidade_registrada);

    if (velocidade_registrada <= velocidade_maxima) {
        printf("Sem Infracao");
    } else if (velocidade_registrada <= velocidade_maxima * 1.20 ) {
        printf("infracao media");
    } else if (velocidade_registrada <= velocidade_maxima * 1.50 ) {
        printf("infracao grave");
    } else {
        printf("infracao gravissima");
    }
    
    return 0;
}