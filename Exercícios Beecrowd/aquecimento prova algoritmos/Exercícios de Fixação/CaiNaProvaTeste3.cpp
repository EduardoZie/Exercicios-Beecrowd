#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

    ///X/3 + (X*2)/6 + (X*4)/9 + (X*8)/12 + ... (8 termos)
    double X;
    double Num,Den,Resultado, Soma=0;

    cin >> X;

    for( double I=1, Num = X, Den = 3; I<=8; I++, Num = Num * 2, Den = Den + 3){ 
        Resultado = Num/Den;
        Soma = Soma + Resultado;
        cout << fixed << setprecision(3) << "Resultado = " << Resultado << endl;

    }

    cout << "Soma = " << Soma << endl;
    
    return 0;
}