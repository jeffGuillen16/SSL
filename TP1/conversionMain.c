#include "Conversion.h"

int main() {
    int inferior, superior, incremento;

    solicitarValores(&inferior, &superior, &incremento);
    encabezadoTabla("Fahrenheit", "Celsius");
    tablaConversion(inferior, superior, incremento, 1);

    // solicitarValores(&inferior, &superior, &incremento);
    encabezadoTabla("Celsius", "Fahrenheit");
    tablaConversion(inferior, superior, incremento, 0);

    return 0;
}