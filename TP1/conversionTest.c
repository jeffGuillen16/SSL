#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Conversion.h"

float redondearFormula(float numero) {
    float factor = pow(10, 2);
    return roundf(numero * factor) / factor;
}

int main() {
    float tablaFahrenheit[] = {-17.22, -16.667, -16.11, -15.556, -15.00, -14.444, -13.89, -13.333, -12.778, -12.222};
    int incremento = 0;
    for (float gradoAConvertir = 1.00; gradoAConvertir <= 10.00; gradoAConvertir += 1.00) {
        assert(redondearFormula(formulaConversion(gradoAConvertir, 1)) == redondearFormula(tablaFahrenheit[incremento]));
        assert(redondearFormula(formulaConversion(tablaFahrenheit[incremento], 0)) == redondearFormula(gradoAConvertir));
        incremento++;
    }
    return 0;
}
