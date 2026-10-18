#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite os coeficientes: ");
    if (scanf("%f, %f, %f", &a, &b, &c) != 3) {
        scanf("%f %f %f", &a, &b, &c);
    }

    if (a == 0) {
        printf("Nao e uma equacao quadratica\n");
        return 0;
    }

    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existe raiz real\n");
    } else if (delta == 0) {
        float raiz = -b / (2 * a);
        printf("Raiz unica\n");
        printf("Raiz: %.2f\n", raiz);
    } else {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1: %.2f\n", raiz1);
        printf("Raiz 2: %.2f\n", raiz2);
    }

    return 0;
}

