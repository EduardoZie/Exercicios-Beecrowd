#include <iostream>
using namespace std;

int main() {
    int Numero;
    cin >> Numero;

    for (int i = 0; i < Numero; i++) {
        if (i == Numero - 1) {
            cout << "Ho!";
        } else {
            cout << "Ho ";
        }
    }

    return 0;
}
