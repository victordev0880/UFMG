#include <math.h>
#include <stdio.h>

int main () {

    int a, b, c;

    printf("Digite tres numeros inteiros: ");
    scanf("%d, %d, %d", &a, &b, &c);

    int d = pow(a, 2) + pow(b, 2) + pow(c, 2);

    printf("Resultado: %d", d);

    return 0;
}