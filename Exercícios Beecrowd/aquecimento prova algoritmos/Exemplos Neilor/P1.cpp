#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int Valor, soma = 0;
    cin >> Valor;
    while(Valor>0){
        for(int i = Valor; i>=0; i=i-4){
            cout << Valor * i << endl;
            soma = soma + i;
            cout << "Soma = " << soma << endl;
        }
        cin >> Valor;
    }
    cout << "Soma Final= " << soma << endl;
}