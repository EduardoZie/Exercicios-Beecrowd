#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int quantidade = 0;

    int fatoriais[8] = {1, 2, 6, 24, 120, 720, 5040, 40320};

    while (N > 0) {

        for (int i = 7; i >= 0; i--) {

            if (fatoriais[i] <= N) {

                N = N - fatoriais[i];
                quantidade++;

                break;
            }
        }
    }

    cout << quantidade << endl;

    return 0;
}