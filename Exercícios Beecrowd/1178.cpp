#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double N[100];

    cin >> N[0];

    for (int i = 0; i < 100; i++) {

        if (i > 0) {
            N[i] = N[i - 1] / 2.0;
        }

        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}