#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string carnet;
    ifstream archivo("c:/parcial.txt");
    if (archivo.is_open()) {
        archivo >> carnet;
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }

    cout << "Mi número de carnet es: " << carnet << endl;

    archivo.open("c:/parcial.txt");
    if (archivo.is_open()) {
        string contenido;
        while (getline(archivo, contenido)) {
            cout << contenido << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }

    return 0;
}



