#include <math.h>
#include <stdio.h>

int main() { 

    float raio, pi;
    pi = 3.1415;
    float Perimetro, Area, Volume;

    printf("Digite o valor do raio da cirfunferencia: ");
    scanf("%f", &raio);
    

    Perimetro = 2 * pi * raio;
    Area = pi * pow(raio, 2);
    Volume = (4.0/3.0) * pi * pow(raio, 3);

    printf("Perimetro: %.2f\n", Perimetro);
    printf("Area: %.2f\n", Area);
    printf("Volume: %.2f\n", Volume);
    
    return 0;
}