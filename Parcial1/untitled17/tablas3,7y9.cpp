#include <iostream>

using namespace std;

int main()
{
    int num, i;

    //Tabla de multiplicar de 3
    num = 3;
    i = 1;
    cout << "Tabla de multiplicar de " << num << endl;
    while (i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    //Tabla de multiplicar de 7
    num = 7;
    i = 1;
    cout << "\nTabla de multiplicar de " << num << endl;
    while (i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    //Tabla de multiplicar de 9
    num = 9;
    i = 1;
    cout << "\nTabla de multiplicar de " << num << endl;
    while (i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}


