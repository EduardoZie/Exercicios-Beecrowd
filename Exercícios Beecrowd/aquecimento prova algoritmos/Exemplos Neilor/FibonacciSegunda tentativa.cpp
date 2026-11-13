#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int Primeiro = 0, Segundo = 1, Proximo = 0;

    for (int i = 0; i < N; i++){
        cout << Primeiro << " ";
        Proximo = Primeiro + Segundo;
        Primeiro = Segundo;
        Segundo = Proximo;
    }

    return 0;
}