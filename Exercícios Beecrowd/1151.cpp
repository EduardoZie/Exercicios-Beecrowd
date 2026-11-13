#include <iostream>
using namespace std;

int main() {

    int quantidade;
    cin >> quantidade;

    int primeiro = 0;/// o primeiro sempre vai ser 0
    int segundo = 1;/// o segundo sempre vai ser 1

    for (int i = 0; i < quantidade; i++) {

        cout << primeiro;

        if (i < quantidade - 1) {
            cout << " ";
        }

        int proximo = primeiro + segundo;

        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;

    return 0;
}