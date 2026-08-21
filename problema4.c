#include <math.h>
#include <stdio.h>

int main(){
    int numero4;

    printf("Digite um  inteiro de 4 algarismos:");
    scanf("%d", &numero4);
    
    int n1 = numero4 % 10;
    numero4 = numero4/10;
    int n2 = numero4 % 10;
    numero4 = numero4/10;
    int n3 = numero4 % 10;
    numero4 = numero4/10;

    printf("Valor invertido: %d%d%d%d",n1,n2,n3,numero4);

    return 0;
}
