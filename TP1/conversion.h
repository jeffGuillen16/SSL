#ifndef __CONVERSION_H__
#define __CONVERSION_H__

void askValues(int* lower, int* upper, int* step);
void headerTable(char* degreeToConvert, char* conversionDegree);
float conversionFormula(float degree, int isFahrenheitToCelsius);
void conversionTable(int lower, int upper, int step, int isFahrenheitToCelsius);

#endif