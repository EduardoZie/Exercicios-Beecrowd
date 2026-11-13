#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    for (int i = 1; i <= Y; i += X) {
        for (int j = i; j < i + X && j <= Y; j++) {
            cout << j;
            if (j < i + X - 1 && j < Y) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}