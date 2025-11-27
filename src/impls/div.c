#include "../heads/div.h"

float div(float a, float b, float *result) {
    if (b == 0 ) return -1;

    *result = a / b;

    return 0;
}