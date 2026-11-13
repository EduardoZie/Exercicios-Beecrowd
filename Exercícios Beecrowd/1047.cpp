#include <iostream>
using namespace std;

int main() {

    int hi, mi, hf, mf;
    cin >> hi >> mi >> hf >> mf;

    if (hi == hf && mi == mf) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
    }

    int horas, minutos;

    if (mf >= mi) {
        minutos = mf - mi;

        if (hf >= hi) {
            horas = hf - hi;
        } else {
            horas = (24 - hi) + hf;
        }

    } else {
        minutos = (60 - mi) + mf;

        if (hf >= hi) {
            horas = hf - hi - 1;
        } else {
            horas = (24 - hi) + hf - 1;
        }
    }

    if (horas < 0) {
        horas = 24 + horas;
    }

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}