#include <stdio.h>

#include "src/heads/sum.h"
#include "src/heads/sub.h"
#include "src/heads/mult.h"
#include "src/heads/div.h"
#include "src/heads/poww.h"
#include "src/heads/sqrtt.h"

int main(void) {
    float a = 2, b = 3;
    float sumResult, subResult, multResult, divResult, powResult, sqrtResult;

    sum(a, b, &sumResult);
    sub(a, b, &subResult);
    mult(a, b, &multResult);
    div(a, b, &divResult);
    poww(a, 2, &powResult);
    sqrtt(a, &sqrtResult);

    printf("sum(%.2f, %.2f) = %.2f\n", a, b, sumResult);
    printf("sub(%.2f, %.2f) = %.2f\n", a, b, subResult);
    printf("mult(%.2f, %.2f) = %.2f\n", a, b, multResult);
    printf("div(%.2f, %.2f) = %.2f\n", a, b, divResult);
    printf("pow(%.2f, 2) = %.2f\n", a, powResult);
    printf("sqrt(%.2f) = %.2f\n", a, sqrtResult);

    return 0;
}