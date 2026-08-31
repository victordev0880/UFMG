#include <stdio.h>

int main(){

    int idade, tdc;
    char sexo;
    
    printf("Digite a idade:");
    scanf("%d", &idade);
    printf("Digite o tempo de contribuicao:");
    scanf("%d", &tdc);
    printf("Digite o sexo:");
    scanf(" %c", &sexo);

    if (sexo == 'M'){
        if (idade >= 60 && tdc >= 35 || idade >=65){
            printf("Pode aposentar\n");
        }
        else {
            printf("Nao pode aposentar\n");
        }
    }

    if (sexo == 'F') {
        if ((idade >= 55 && tdc >= 30) || idade >= 60) {
            printf("Pode aposentar\n");
        } else {
            printf("Nao pode aposentar\n");
        }
    }

    return 0;

}