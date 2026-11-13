#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
double valor;
int centavos, reais;
cin >> valor;
reais = valor;
centavos = (valor - reais)  * 100;
cout << fixed << setprecision(2) << reais << " reais e " << centavos << " centavos" << endl;
    return 0;
} 