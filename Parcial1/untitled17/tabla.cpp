#include <iostream>

int main() {
    int tabla, multiplicador, resultado;

    // Tabla del 3
    tabla = 3;
    multiplicador = 1;
    while (multiplicador <= 10) {
        resultado = tabla * multiplicador;
        std::cout << tabla << " x " << multiplicador << " = " << resultado << std::endl;
        multiplicador++;
    }

    // Tabla del 7
    tabla = 7;
    multiplicador = 1;
    while (multiplicador <= 10) {
        resultado = tabla * multiplicador;
        std::cout << tabla << " x " << multiplicador << " = " << resultado << std::endl;
        multiplicador++;
    }

    // Tabla del 9
    tabla = 9;
    multiplicador = 1;
    while (multiplicador <= 10) {
        resultado = tabla * multiplicador;
        std::cout << tabla << " x " << multiplicador << " = " << resultado << std::endl;
        multiplicador++;
    }

    return 0;
}
