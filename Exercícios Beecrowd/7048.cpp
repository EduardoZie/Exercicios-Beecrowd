#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

/// DEFINIÇÂO DE VARIAVEIS
double C, F;

///ENTRADA TECLADO
cin >> C;

/// FÓRMULA
F = (9*C+160) / 5;

/// SAIDA
cout << fixed << setprecision(1) << F << endl;

return 0;
}
