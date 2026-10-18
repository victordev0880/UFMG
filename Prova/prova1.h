#include <math.h>

double loglcdf(double x, double a, double b){
    if (x < 0){
        return 0.0;
    } else {
        return 1 / (1 + pow(x / a, b));
    }
}

int maior(int x, int y){
    if (x > y) {
        return x
    }
    return y;

}