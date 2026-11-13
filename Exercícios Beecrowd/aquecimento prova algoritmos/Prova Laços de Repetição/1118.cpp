#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int Opcao = 1;

    while (Opcao == 1) {

        double Nota, Soma = 0;
        int Contador = 0;

        while (Contador < 2) {

            cin >> Nota;

            if (Nota >= 0 && Nota <= 10) {
                Soma = Soma + Nota;
                Contador++;
            } else {
                cout << "nota invalida" << endl;
            }
        }

        cout << fixed << setprecision(2);
        cout << "media = " << Soma / 2.0 << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> Opcao;

        } while (Opcao != 1 && Opcao != 2);
    }

    return 0;
}