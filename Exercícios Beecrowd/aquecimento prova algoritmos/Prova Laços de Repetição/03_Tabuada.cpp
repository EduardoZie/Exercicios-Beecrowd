#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

int Numero;
cin >> Numero;

for(int i=1; i<=100; i++){
    cout << Numero << " x " << i << " = " << Numero * i << endl;
}

    return 0;
}