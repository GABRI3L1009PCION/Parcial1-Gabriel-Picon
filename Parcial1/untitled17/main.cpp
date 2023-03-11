#include <iostream>

int main() {
    int num;
    std::cout << "Ingresa un numero para generar su tabla de multiplicar: ";
    std::cin >> num;
    std::cout << "Tabla de multiplicar de " << num << ":" << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << num << " x " << i << " = " << num*i << std::endl;
    }
    return 0;
}







