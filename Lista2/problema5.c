#include <stdio.h>
int main(){

    float cdf, cdi, cdd, ct;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &cdf);

    if (cdf <= 12000) {
        cdi = 0;
        cdd = 1.0/20.0 * cdf;
    } else if (cdf > 12000 && cdf <= 25000) {
        cdi = 3.0/20.0 * cdf;
        cdd = 1.0/10.0 * cdf;
    } else if (cdf > 25000) {
        cdi = 2.0/10.0 * cdf;
        cdd = 3.0/20.0 * cdf;
    }

    ct = cdf + cdi + cdd;

    printf ("Custo total: %.2f", ct);

    return 0;
}