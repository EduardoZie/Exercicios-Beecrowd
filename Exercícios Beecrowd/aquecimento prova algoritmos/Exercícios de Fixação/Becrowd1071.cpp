#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int FirtNumber, SecundNumber, Maior, Menor;
    int SomaImpar=0;
    cin >> FirtNumber >> SecundNumber;

    if(FirtNumber>SecundNumber){
        Maior = FirtNumber;
        Menor = SecundNumber;

    } else if(SecundNumber>FirtNumber){
        Maior = SecundNumber;
        Menor = FirtNumber;
    }

    for(int i = Menor+1; i<Maior; i++){
        if(i%2 != 0){
            SomaImpar = SomaImpar + i;
        }
    }

    cout << SomaImpar << endl;

    return 0;
}