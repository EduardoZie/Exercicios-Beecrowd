#include <iostream>
using namespace std;

int main() {

    int quantidade = 0;/// quantidade de primos
    int numero = 101;/// numero de teste

    while (quantidade <= 100){/// enquanto n tiver 100 primos ele n para

        int divisores = 0;

        for (int i = 1; i <= numero; i++) {

            if (numero % i == 0) {
                divisores++;/// conta quantos divisores tem
            }
        }

        if (divisores == 2) {/// se o numero tiver dois divisores 1 e ele mesmo ele exibe o numero primo

            cout << numero;

            quantidade++;

            if (quantidade < 100) {
                cout << " ";/// aqui só damos um espaço
            }
        }

        numero++;
    }

    cout << endl;

    return 0;
}