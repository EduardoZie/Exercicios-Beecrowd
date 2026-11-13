#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++) {
    int N;
    cin >> N;

    int maior = 0;

    for(int j = 0; j < N; j++) {
    int velocidade;
    cin >> velocidade;

    if(velocidade > maior) {
    maior = velocidade;
    }
    }

    cout << "Case " << i << ": " << maior << endl;
    }

    return 0;
}