#include "problema7.h"
#include <math.h>

int equacao(int a, int b, int c, double *end_x1, double *end_x2) {
    double delta = (double)b * b - 4.0 * a * c;

    if (delta < 0.0) {
        return 0;
    } else if (delta == 0.0) {
        *end_x1 = (double)(-b) / (2.0 * a);
        return 1;
    } else {
        *end_x1 = (-b + sqrt(delta)) / (2.0 * a);
        *end_x2 = (-b - sqrt(delta)) / (2.0 * a);
        return 2;
    }
}
