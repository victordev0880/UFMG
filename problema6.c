#include <math.h>
#include <stdio.h>

int main () {
    float vp, i;
    int n;
    
    printf("Digite o valor do investimento inicial:");
    scanf("%f", &vp);
    printf("Digite a taxa de juros anual: ");
    scanf("%f", &i);
    printf("Digite o periodo do investimento em anos:");
    scanf("%d", &n);

    float vf = vp*pow((1.0+(i*0.01)), n);

    printf("valor futuro: %.2f", vf);

    return 0;
}