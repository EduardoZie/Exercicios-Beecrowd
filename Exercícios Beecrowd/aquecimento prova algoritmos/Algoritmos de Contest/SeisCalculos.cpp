#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int N;
    double Y, Maior, Menor;
    double NumP = 0, SomaP = 0, MediaP = 0;
    double NumN = 0, SomaN = 0, MediaN = 0;
    double ContZ = 0, ContNn = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> Y;

        if (i == 0) {
            Maior = Y;
            Menor = Y;
        }

        if (Y > Maior) {
            Maior = Y;
        }

        if (Y < Menor) {
            Menor = Y;
        }

        if (Y > 0) {
            NumP++;
            SomaP = SomaP + Y;
            MediaP = SomaP / NumP;
        }

        if (Y < 0) {
            NumN++;
            SomaN = SomaN + Y;
            MediaN = SomaN / NumN;
        }

        if (Y == 0) {
            ContZ++;
        }
        if (Y != 0){
            ContNn++;
        }
    }

    cout << fixed << setprecision(1);
    cout << MediaP << endl;
    cout << MediaN << endl;
    cout << ContZ << endl;
    cout << Maior << endl;
    cout << Menor << endl;
    cout << ContNn << endl;

    return 0;
}