#include <iostream>
using namespace std;

int main() {
    int ValorInicial, QuantOpe, ValorDc;
    char DC;

    while (cin >> ValorInicial >> QuantOpe) {
        int SaldoF = ValorInicial;

        for (int i = 0; i < QuantOpe; i++) {
            cin >> DC >> ValorDc;

            if (DC == 'D') {
                SaldoF = SaldoF - ValorDc;
            }
            else if (DC == 'C') {
                SaldoF = SaldoF + ValorDc;
            }
        }

        cout << SaldoF << endl;
    }

    return 0;
}