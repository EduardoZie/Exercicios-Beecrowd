#include <iostream>
using namespace std;

int main(){

    int Valor, Maior, Menor, Posicao;

    cin >> Valor;

    Maior = Menor = Valor;
    Posicao = 1;

    for (int i = 2; i <= 100; i++){

        cin >> Valor;

        if (Valor > Maior){
            Maior = Valor;
            Posicao = i;
        }

        if (Valor < Menor){
            Menor = Valor;
        }
    }

    cout << Maior << endl;
    cout << Posicao << endl;

    return 0;
}