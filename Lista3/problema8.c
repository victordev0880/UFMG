#include "problema6.h"
#include "problema8.h"

void ordena(int *end_x1, int *end_x2, int *end_x3) {
    if (*end_x1 > *end_x2) {
        troca(end_x1, end_x2);
    }
    if (*end_x1 > *end_x3) {
        troca(end_x1, end_x3);
    }
    if (*end_x2 > *end_x3) {
        troca(end_x2, end_x3);
    }
}
