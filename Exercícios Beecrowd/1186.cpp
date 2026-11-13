#include <iostream>
#include <iomanip>
#include <cmath>
#define Tam 12
using namespace std;
int main(){

    double Matriz[Tam][Tam], Soma=0, Cont=0;
    char Letra;

    cin >> Letra;

    for(int i=0;i<Tam; i++){
        for(int j=0;j<Tam; j++){

            cin >> Matriz[i][j];
            if(i + j > Tam - 1){
                Soma = Soma+Matriz[i][j];
                Cont ++;
        }
    }
    }
    if(Letra=='S'){
        cout << fixed << setprecision(1) << Soma << endl;
    }else{
        cout << fixed << setprecision(1) << Soma/Cont << endl;
    }
    return 0;
}