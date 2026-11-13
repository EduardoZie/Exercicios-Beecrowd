#include <iostream>
#include <iomanip>
using namespace std;

#define Tam 12

int main() {
    double Matriz[Tam][Tam], Coluna;
    char Soma_ou_Media;
    double Soma = 0, Media = 0;

    cin >> Coluna;
    cin >> Soma_ou_Media;

    for (int i = 0; i < Tam; i++) {
        for (int j = 0; j < Tam; j++) {

            cin >> Matriz[i][j];

            if (j == Coluna) {
                Soma += Matriz[i][j];
            }
        }
    }

    if (Soma_ou_Media == 'S') {
        cout << Soma << endl;
    } else if (Soma_ou_Media == 'M') {
        Media = Soma / Tam;
        cout << fixed << setprecision(1) << Media << endl;
    }

    return 0;
}
