#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int ContPar=0, ContImpar=0, ContPositivo=0, ContNegativo=0;

    for(int i=0; i<5; i++){
        int N;
        cin >> N;

        if(N%2==0)ContPar++;
        if(N%2!=0)ContImpar++;
        if(N>0)   ContPositivo++;
        if(N<0)   ContNegativo++;
    }

    cout << ContPar << " valor(es) par(es)" << endl;
    cout << ContImpar << " valor(es) impar(es)" << endl;
    cout << ContPositivo << " valor(es) positivo(s)" << endl;
    cout << ContNegativo << " valor(es) negativo(s)" << endl;

    return 0;
}