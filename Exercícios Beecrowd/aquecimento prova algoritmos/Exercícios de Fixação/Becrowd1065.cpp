#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int ContPares=0;
    for(int i=0; i<5; i++){
        int Numero;
        cin >> Numero;

        if(Numero%2==0)ContPares++;
    }

    cout << ContPares << " valores pares" << endl;

    return 0;
}