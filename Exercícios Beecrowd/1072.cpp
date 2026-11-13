#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int Ntestes, X;
    int in=0, out=0;
    cin >> Ntestes;

    for (int i = 0; i < Ntestes; i++){
        cin >> X;
        
        if (X <=20 and X >= 10){
            in++;
        }else {
            out ++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}