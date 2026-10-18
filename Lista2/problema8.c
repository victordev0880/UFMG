#include <stdio.h>

int main() {

  float valor_hora, hora_total, valor_total;
  float IR, INSS, FGTS;

  printf("Digite o valor da hora de trabalho: ");
  scanf("%f", &valor_hora);
  printf("Digite a quantidade de horas trabalhadas no mes: ");
  scanf("%f", &hora_total);

  valor_total = valor_hora * hora_total;

  printf("Salario bruto: R$ %.2f\n", valor_total);

  if (valor_total <= 900) {
    IR = 0;
  } else if (valor_total > 900 && valor_total <= 1500) {
    IR = 1.0 / 20 * valor_total;
  } else if (valor_total > 1500 && valor_total <= 2500) {
    IR = 1.0 / 10 * valor_total;
  } else {
    IR = 1.0 / 5 * valor_total;
  }

  FGTS = 11.0 / 100 * valor_total;
  INSS = 1.0 / 10 * valor_total;
  float total_descontos = IR + INSS;
  printf("IR: R$ %.2f\n", IR);
  printf("INSS: R$ %.2f\n", INSS);
  printf("FGTS: R$ %.2f\n", FGTS);
  printf("Total de descontos: R$ %.2f\n", total_descontos);
  printf("Salario liquido: R$ %.2f\n", valor_total - total_descontos);

  return 0;
}
