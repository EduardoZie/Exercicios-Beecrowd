#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    /// Exemplo inicial 6 e -5 
    int X, Y, maior, menor, SomaImpar=0;
    cin >> X >> Y;

    if (X < Y){
        maior = Y;
        menor = X;
    }else{
        maior = X;
        menor = Y;
    }

    for (int i=menor + 1; i < maior; i++ ){
        if (i % 2 != 0){
        SomaImpar = SomaImpar + i;
        }
    }
    cout << SomaImpar << endl;

    return 0;
}