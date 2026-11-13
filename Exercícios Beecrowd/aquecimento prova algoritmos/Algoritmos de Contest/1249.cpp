#include <iostream>
using namespace std;

int main() {
    int N[30];

    N[0] = 100;

    for (int i = 1; i < 30; i++) {
        N[i] = N[i-1] - i;
    }

    for (int i = 0; i < 30; i++) {
        cout << "N[" << i << "]=" << N[i] << endl;
    }

    return 0;
}
