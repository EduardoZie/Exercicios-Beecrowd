#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
    
    string Linha, Nome;
    double Distancia, Total=0;
    int Cont=0;

    while (getline(cin,Linha)) {
        Nome=Linha;
        getline(cin, Linha);
        stringstream token(Linha);/// Valor da linha é passado po token

        token >> Distancia; /// o token le o valor da linha e coloca na distancia

        Total=Total+Distancia;
        Cont++;
    }
    cout << fixed << setprecision(1) << Total/Cont << endl;
}