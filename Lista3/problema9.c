#include "problema9.h"

void media(float n1, float n2, float *end_media, char *end_status) {
    *end_media = (n1 + n2) / 2.0f;

    if (*end_media >= 7.0f) {
        *end_status = 'A';
    } else if (*end_media >= 4.0f) {
        *end_status = 'E';
    } else {
        *end_status = 'R';
    }
}
