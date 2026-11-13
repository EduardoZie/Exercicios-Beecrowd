#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int X[100];
    int Contador=0;
    int Numero_Inicio=100;

    while (Contador<100) {
    int Divisores=0;

    for (int i= 1; i <= Numero_Inicio; i++) {
        if (Numero_Inicio%i == 0) {
        Divisores++;
        }
    }

    if (Divisores==2) {
        X[Contador]=Numero_Inicio;
        Contador++;
    }

    Numero_Inicio++;
    }

    for (int i = 0; i < 99; i++) {
        cout << X[i] << " ";
    }
    cout << X[99] << endl;;

    return 0;
}