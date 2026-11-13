#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int a = 0;
    int b = 1;

    for (int i = 0; i < N; i++) {

        if (i == N - 1)
            cout << a;
        else
            cout << a << " ";

        int prox = a + b;
        a = b;
        b = prox;
    }

    cout << endl;

    return 0;
}