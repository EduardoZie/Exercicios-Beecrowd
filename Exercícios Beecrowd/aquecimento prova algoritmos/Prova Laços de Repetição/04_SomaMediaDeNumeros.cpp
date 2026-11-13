#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    cout << "Digite o numero de testes:" << endl;
    int NumeroTestes, Num, Soma=0, ContadorN=0, Media=0;
    cin >> NumeroTestes;

    for(int i=0; i < NumeroTestes; i++){
        cin >> Num;
        Soma = Soma + Num;
        ContadorN ++;
    }

    Media = Soma / ContadorN;
    cout << "Media = " << Media << endl;

    return 0;
}