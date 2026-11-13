#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int a, b, c, d, e;
    int positivo, negativo;
    int par, impar;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0 || d % 2 == 0 || e % 2 == 0){
        par;
    } else {
        impar;
    }
    positivo = a > 0 || b > 0 || c > 0 || d > 0 || e > 0;
    negativo = a < 0 || b < 0 || c < 0 || d < 0 || e < 0;




cout <<    << " valor(es) par(es)" << endl;
cout <<    << " valor(es) impar(es)" << endl;
cout <<    << " valor(es) positivo(s)" << endl;
cout <<    << " valor(es) negativo(s)" << endl;


    return 0;
}