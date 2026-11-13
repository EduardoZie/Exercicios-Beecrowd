#include <iostream>
using namespace std;

int main() {
    int X, Z;
    cin >> X;

    do {
        cin >> Z;
    } while (Z <= X);

    int Soma = 0;
    int Cont = 0;
    int Atual = X;

    while (Soma <= Z) {
        Soma += Atual;
        Atual++;
        Cont++;
    }
    cout << Cont << endl;

    return 0;
}