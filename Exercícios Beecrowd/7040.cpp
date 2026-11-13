#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
/// DEFINIÇÂO DE VARIAVEIS
double D, R, VALOR;
/// ENTRADA NO TECLADO
cin >> D >> R;
/// PROCESSAMENTO
VALOR = D * R;
/// SAIDA
cout << fixed << setprecision (2) << VALOR << endl;

return 0;
}
