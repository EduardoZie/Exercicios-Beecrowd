#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int N;
    int ContA=0, ContG=0, ContD=0;
    while (cin >> N){
        if (N == 1) ContA++;
        if (N == 2) ContG++;
        if (N == 3) ContD++;
        if (N == 4) break;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << ContA << endl;
    cout << "Gasolina: " << ContG << endl;
    cout << "Diesel: " << ContD << endl;

    return 0;
}