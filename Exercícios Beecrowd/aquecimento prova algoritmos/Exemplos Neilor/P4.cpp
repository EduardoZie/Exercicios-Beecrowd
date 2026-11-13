#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    double Maior=0, Soma = 0;

    for(int i=0; i<10; i++){
        double Valor;
        cin >> Valor;
        cout << fixed << setprecision(1) <<  Valor*Valor << endl;
        if(Valor>Maior) Maior = Valor;
        Soma = Soma + Valor;
    }
    cout << fixed << setprecision(1) << Maior << endl;
    cout << fixed << setprecision(1) << Soma/10.0 << endl;
   
}