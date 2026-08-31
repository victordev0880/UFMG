#include <math.h>
#include <stdio.h>

int main() {

    float valor_compra;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    float valor_desconto = valor_compra * 0.9;
    float valor_parcela = valor_compra/6;
    float valor_comissao_av = valor_desconto/20;
    float valor_comissao_p = valor_compra/20;

    printf("Valor com desconto: %.2f\n", valor_desconto);
    printf("Valor da parcela: %.2f\n", valor_parcela);
    printf("Comissao do vendedor (a vista): %.2f\n", valor_comissao_av);
    printf("Comissao do vendedor (parcelado): %.2f\n", valor_comissao_p);

    return 0;
}