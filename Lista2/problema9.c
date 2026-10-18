#include <stdio.h>

int main() {
    int valor;

    printf("Digite valor: ");
    if (scanf("%d", &valor) != 1 || valor <= 0 || valor % 10 != 0) {
        printf("Valor invalido\n");
        return 0;
    }

    int n100 = valor / 100;
    valor %= 100;

    int n50 = valor / 50;
    valor %= 50;

    int n20 = valor / 20;
    valor %= 20;

    int n10 = valor / 10;

    if (n100 > 0) {
        printf("%d nota(s) de 100\n", n100);
    }
    if (n50 > 0) {
        printf("%d nota(s) de 50\n", n50);
    }
    if (n20 > 0) {
        printf("%d nota(s) de 20\n", n20);
    }
    if (n10 > 0) {
        printf("%d nota(s) de 10\n", n10);
    }

    return 0;
}
