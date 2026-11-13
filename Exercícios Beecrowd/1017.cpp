#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
int tempo, velocidade;
double litros, distancia;
cin >> tempo;
cin >> velocidade;
distancia = tempo * velocidade;
litros = distancia / 12.0;

cout << fixed << setprecision (3) << litros << endl;

return 0;
}
