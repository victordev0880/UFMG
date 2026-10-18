#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite os tres lados: ");
    scanf("%d, %d, %d", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0 ||
        !(z < x + y && y < x + z && x < y + z)) {
        printf("Nao e um triangulo\n");
    } else if (x == y && y == z) {
        printf("Triangulo Equilatero\n");
    } else if (x == y || x == z || y == z) {
        printf("Triangulo Isosceles\n");
    } else {
        printf("Triangulo Escaleno\n");
    }

    return 0;
}
