#include <math.h>
#include <stdio.h>

int main () {
    float AP, AJ, AM;
    int premio;

    scanf("%f", &AP);
    scanf("%f", &AJ);
    scanf("%f", &AM);
    scanf("%d", &premio);

    float A = AP + AJ + AM;
    float PP = (AP/A) * premio;
    float PJ = (AJ/A) * premio;
    float PM = (AM/A) * premio;

    printf("Premio do Pedro: %.2f\n", PP);
    printf("Premio do Joao: %.2f\n", PJ);
    printf("Premio da Marcela: %.2f", PM);

    return 0;



}