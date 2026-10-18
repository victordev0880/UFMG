#include "problema1.h"


float pagamento (float valor_hora, unsigned short qtde){
    float salario_bruto = valor_hora * qtde;
    if (salario_bruto <= 900){
        float salario_liquido = salario_bruto;
    } else if (salario_bruto <= 1500){
        float salario_liquido = salario_bruto * 0.95;
    } else if (salario_bruto <= 2500){
        float salario_liquido = salario_bruto * 0.90;
    } else {
        float salario_liquido = salario_bruto * 0.80;
    }
    
    return salario_liquido;
}