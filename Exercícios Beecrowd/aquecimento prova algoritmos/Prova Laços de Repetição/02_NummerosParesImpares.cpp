#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    cout << "Digite um valor e uma quantidade de numeros impares que voce quiser que sejam mostrados depois dele:" << endl;
    int Valor, Quantidade;
    cin >> Valor >> Quantidade;

    if (Valor%2==0){
        Valor = Valor +1;
    }

    for(int i=0; i < Quantidade; i++){
        cout << Valor << endl;
        Valor = Valor + 2;

    }

    return 0;
}