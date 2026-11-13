 #include <iostream>
using namespace std;

int main() {
    int N, X, Y;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> X >> Y;

        int soma = 0;
        int menor, maior;

        if(X < Y) {
            menor = X;
            maior = Y;
        } else {
            menor = Y;
            maior = X;
        }

        for(int j = menor + 1; j < maior; j++) {
            if(j % 2 != 0) {
                soma += j;
            }
        }

        cout << soma << endl;
    }

    return 0;
}