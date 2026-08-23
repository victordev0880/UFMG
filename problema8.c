#include <math.h>
#include <stdio.h>

int main () {

    int n4;

    printf("Digite um  inteiro de 4 algarismos:");
    scanf("%d", &n4);
    
    int n1 = n4 % 10;
    n4 = n4/10;
    int n2 = n4 % 10;
    n4 = n4/10;
    int n3 = n4 % 10;
    n4 = n4/10;

    int soma = n1 + n2 + n3 + n4;

    printf("Resultado: %d", soma);

    return 0;
}