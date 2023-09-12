#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Conversion.h"

float roundFormula(float number) {
    float factor = pow(10, 2);
    return roundf(number * factor) / factor;
}

int main() {
    float fahrenheitTable[] = {-17.22, -16.667, -16.11, -15.556, -15.00, -14.444, -13.89, -13.333, -12.778, -12.222};
    int step = 0;
    for (float degreeToConvert = 1.00; degreeToConvert <= 10.00; degreeToConvert += 1.00) {
        assert(roundFormula(conversionFormula(degreeToConvert, 1)) == roundFormula(fahrenheitTable[step]));
        assert(roundFormula(conversionFormula(fahrenheitTable[step], 0)) == roundFormula(degreeToConvert));
        step++;
    }
    return 0;
}