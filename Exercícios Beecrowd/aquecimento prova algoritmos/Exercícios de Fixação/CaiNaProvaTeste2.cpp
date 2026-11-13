#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    /// Y/2 + (Y+2)/4 + (Y+4)/8 + (Y+6)/16 + ... + (Y+14)/256

    int Y,I;
    cin >> Y;

    double Numerador,Denominador, Soma=0, Resultado;


    for(I=0, Numerador = Y , Denominador = 2; I<8; I++,Numerador = Numerador +2,Denominador = Denominador * 2 ){
        Resultado = Numerador / Denominador;
        cout << fixed << setprecision(3)<< "Resultado = " << Resultado << endl;
        Soma = Soma + Resultado;
    }
    
    cout <<"Soma da sequencia de calculos = " << Soma << endl;
    
    
    
    return 0;
}