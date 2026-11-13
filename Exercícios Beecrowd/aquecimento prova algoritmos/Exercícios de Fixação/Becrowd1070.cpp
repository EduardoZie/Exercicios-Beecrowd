#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2 == 0)
        N++;

    for (int i = 0; i < 6; i++) {
        cout << N << endl;
        N += 2;
    }

    return 0;
}