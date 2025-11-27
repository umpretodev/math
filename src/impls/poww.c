#include "../heads/poww.h"
#include "math.h"

float poww(float base, int index, float *result) {
    if (index < 0) return -1;
    if (index == 0) return 0;
    
    *result = (float) pow(base, index);
  
    return 0;
}