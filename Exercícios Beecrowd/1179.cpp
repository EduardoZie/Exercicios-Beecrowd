#include <iostream>
using namespace std;

int main() {

    int par[5], impar[5];
    int contPar = 0, contImpar = 0;
    int x;

    for (int i = 0; i < 15; i++) {
        cin >> x;

        if (x % 2 == 0) {
            par[contPar] = x;
            contPar++;

            if (contPar == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                contPar = 0;
            }
        }
        else {
            impar[contImpar] = x;
            contImpar++;

            if (contImpar == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                contImpar = 0;
            }
        }
    }

    for (int i = 0; i < contImpar; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for (int i = 0; i < contPar; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}