#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int N, Y;
    int ContB;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> Y;

        ContB = 0;

        while (Y > 0) {
            Y = Y / 2;
            ContB++;
        }

        cout << ContB << endl;
    }

    return 0;
}