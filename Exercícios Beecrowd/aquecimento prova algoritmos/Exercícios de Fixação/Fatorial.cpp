#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int Numero;
    int Fatorial = 1;
    cout << "Digite um numero para saber seu fatorial:" << endl;
    cin >> Numero;

    for (int i = 1; i<=Numero; i++){
        Fatorial = Fatorial * i;
        
    }

    cout  << "Fatorial: " << Fatorial << endl;

    return 0;
}