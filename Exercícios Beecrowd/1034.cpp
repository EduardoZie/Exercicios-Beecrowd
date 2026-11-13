#include <iostream>
using namespace std;

int main() {

    int numero;
    int contA = 0, contG = 0, contD = 0;

    while (cin >> numero) {

        if (numero == 1) {
            contA++;
        }
        else if (numero == 2) {
            contG++;
        }
        else if (numero == 3) {
            contD++;
        }
        else if (numero == 4) {
            break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << contA << endl;
    cout << "Gasolina: " << contG << endl;
    cout << "Diesel: " << contD << endl;

    return 0;
}