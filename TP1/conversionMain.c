#include "Conversion.h"

int main() {
    int lower, upper, step;

    askValues(&lower, &upper, &step);
    headerTable("Fahrenheit", "Celsius");
    conversionTable(lower, upper, step, 1);

    //askValues(&lower, &upper, &step);
    headerTable("Celsius", "Fahrenheit");
    conversionTable(lower, upper, step, 0);

    return 0;
}