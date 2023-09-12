#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Conversion.h"

float redondearFormula(float numero) {
    float factor = pow(10, 2);
    return roundf(numero * factor) / factor;
}

int main() {
    float tablaFahrenheit[] = {32.0, 41.0, 50.0, 59.0, 68.0, 77.0, 86.0, 95.0, 104.0, 113.0};
    int incremento = 0;
    for (float gradoAConvertir = 0.0; gradoAConvertir <= 9.0; gradoAConvertir += 1.0) {
        assert(redondearFormula(formulaConversion(gradoAConvertir * 10.0, 1)) == redondearFormula(tablaFahrenheit[incremento]));
        assert(redondearFormula(formulaConversion(tablaFahrenheit[incremento], 0)) == redondearFormula(gradoAConvertir * 10.0));
        incremento++;
    }
    return 0;
}
