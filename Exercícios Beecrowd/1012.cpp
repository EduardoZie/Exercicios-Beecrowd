#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

///DEFINÇÂO DE VARIAVEIS
double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
double pi = 3.14159;

/// LEITURA
cin >> A >> B >> C;

///PROCESSAMENTO
TRIANGULO = (A * C) / 2;
CIRCULO = pi * pow(C,2);
TRAPEZIO = ((A + B) * C) / 2;
QUADRADO = pow(B,2);
RETANGULO = A * B;

/// SAIDA
cout << fixed << setprecision (3) << "TRIANGULO: " << TRIANGULO << endl;
cout << fixed << setprecision (3) << "CIRCULO: " << CIRCULO << endl;
cout << fixed << setprecision (3) << "TRAPEZIO: " << TRAPEZIO << endl;
cout << fixed << setprecision (3) << "QUADRADO: " << QUADRADO << endl;
cout << fixed << setprecision (3) << "RETANGULO: " << RETANGULO << endl;
}
























