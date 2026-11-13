#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int x;
    cin >> x;

    double Numerador, Denominador, I, Resultado;
    double Soma=0;

    for(Numerador = x, Denominador = 2, I=1; I <=10; Numerador = Numerador + 1, Denominador = Denominador+2, I++){
        Resultado = Numerador / Denominador;
        cout << fixed << setprecision(2) <<  "Resultado = " << Resultado << endl;
        Soma = Soma + Resultado;
    }

    cout << "Soma dos Resultados = " << Soma << endl;



    return 0;
}