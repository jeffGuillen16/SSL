#include <stdio.h>
#include "Conversion.h"

void askValues(int* lower, int* upper, int* step) {
    printf("Ingrese el valor inicial: ");
    scanf("%d", lower);

    printf("Ingrese el valor final: ");
    scanf("%d", upper);

    printf("Ingrese el paso: ");
    scanf("%d", step);
}

void headerTable(char* degreeToConvert, char* conversionDegree) {
    printf("\nTabla de conversión %s a %s\n", degreeToConvert, conversionDegree);
    printf("---------------------------------------\n");
    printf(" %s \t\t %s\n", degreeToConvert, conversionDegree);
    printf("---------------------------------------\n");
}

float conversionFormula(float degree, int isFahrenheitToCelsius) {
    if (isFahrenheitToCelsius) return (degree - 32) * 5.0 / 9.0;
    return (degree * 9.0 / 5.0) + 32.0;
}

void conversionTable(int lower, int upper, int step, int isFahrenheitToCelsius) {
    float degreeToConvert, conversionDegree;
    for (degreeToConvert = lower; degreeToConvert <= upper; degreeToConvert += step) {
        conversionDegree = conversionFormula(degreeToConvert, isFahrenheitToCelsius);
        printf(" %.2f \t\t\t %.2f\n", degreeToConvert, conversionDegree);
    }
}