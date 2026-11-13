#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int N1, N2, Maior, Menor;
    cin >> N1 >> N2;

    if(N1>N2){
        Maior = N1;
        Menor = N2;
    }else if(N2>N1){
        Maior = N2;
        Menor = N1;
    }

    for (int i = Menor+1; i< Maior; i++){
        if(i%5==2 or i%5==3){
            cout << i << endl;
        }
    }

    return 0;
}