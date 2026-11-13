#include <iostream>
using namespace std;

int main() {
    int M, N;
    int menor, maior;

while (cin >> M >> N) {
    if (M <= 0 || N <= 0)
        break;

    if (M < N) {
        menor = M;
        maior = N;
    } else {
        menor = N;
        maior = M;
    }

    int soma = 0;

    for (int i = menor; i <= maior; i++) {
            cout << i << endl;;
            soma += i;
    }
    cout << soma << endl;
    }

    return 0;
}