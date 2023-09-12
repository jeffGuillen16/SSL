#include <stdio.h>
#include "Conversion.h"

void solicitarValores(int* inferior, int* superior, int* incremento) {
    printf("Ingrese el valor inicial: ");
    scanf("%d", inferior);

    printf("Ingrese el valor final: ");
    scanf("%d", superior);

    printf("Ingrese el incremento: ");
    scanf("%d", incremento);
}

void encabezadoTabla(char* gradoAConvertir, char* gradoConvertido) {
    printf("\nTabla de conversión %s a %s\n", gradoAConvertir, gradoConvertido);
    printf("---------------------------------------\n");
    printf(" %s \t\t %s\n", gradoAConvertir, gradoConvertido);
    printf("---------------------------------------\n");
}

float formulaConversion(float grado, int esFahrenheitACelsius) {
    if (esFahrenheitACelsius) return (grado - 32) * 5.0 / 9.0;
    return (grado * 9.0 / 5.0) + 32.0;
}

void tablaConversion(int inferior, int superior, int incremento, int esFahrenheitACelsius) {
    float gradoAConvertir, gradoConvertido;
    for (gradoAConvertir = inferior; gradoAConvertir <= superior; gradoAConvertir += incremento) {
        gradoConvertido = formulaConversion(gradoAConvertir, esFahrenheitACelsius);
        printf(" %.2f \t\t\t %.2f\n", gradoAConvertir, gradoConvertido);
    }
}