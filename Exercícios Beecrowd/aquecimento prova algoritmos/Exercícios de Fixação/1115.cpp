#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;
    while (N1 != 0 && N2 != 0) {

        if (N1 > 0 && N2 > 0) {
            cout << "primeiro" << endl;
        }
        else if (N1 < 0 && N2 > 0) {
            cout << "segundo" << endl;
        }
        else if (N1 < 0 && N2 < 0) {
            cout << "terceiro" << endl;
        }
        else if (N1 > 0 && N2 < 0) {
            cout << "quarto" << endl;
        }

        cin >> N1 >> N2;
    }

    return 0;
}