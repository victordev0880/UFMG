#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    int maior, menor;
    int divisiveis = 0;

    printf("Digite 5 numeros: ");
    scanf("%d, %d, %d, %d, %d", &n1, &n2, &n3, &n4, &n5);

    maior = n1;
    menor = n1;

    if (n2 > maior)
        maior = n2;

    if (n3 > maior)
        maior = n3;

    if (n4 > maior)
        maior = n4;

    if (n5 > maior)
        maior = n5;

    if (n2 < menor)
        menor = n2;

    if (n3 < menor)
        menor = n3;

    if (n4 < menor)
        menor = n4;

    if (n5 < menor)
        menor = n5;

    if (n1 % 3 == 0)
        divisiveis++;

    if (n2 % 3 == 0)
        divisiveis++;

    if (n3 % 3 == 0)
        divisiveis++;

    if (n4 % 3 == 0)
        divisiveis++;

    if (n5 % 3 == 0)
        divisiveis++;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Divisiveis por 3: %d\n", divisiveis);

    return 0;
}