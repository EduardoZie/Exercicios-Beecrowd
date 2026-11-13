#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    cout << "Digite o Volume para a Realizacao do Calculo" << endl;

    double VOLUME, VOLUMEPRATA, VOLUMEOURO;
    double V;

    cin >> V;

    VOLUME = V / 1000 * 8.6;
    VOLUMEPRATA = V / 1000 * 9.49;
    VOLUMEOURO = V / 1000 * 19.3;

    cout << fixed << setprecision(2) << "Peso da Peca em latao = " << VOLUME << endl;
    cout << fixed << setprecision(2) << "Peso da Peca em Prata 925 = " << VOLUMEPRATA << endl;
    cout << fixed << setprecision(2) << "Peso da Peca em Ouro 18k = " << VOLUMEOURO<< endl;

return 0;
}
