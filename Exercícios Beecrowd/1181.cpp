#include <iostream>
#include <iomanip>
#include <cmath>
#define TamMatriz 12
using namespace std;
int main(){

    int Linha_Na_Matriz;
    double Matriz[TamMatriz][TamMatriz], Soma=0;
    char Soma_ou_Media;
    
    cin >> Linha_Na_Matriz;
    cin >> Soma_ou_Media;

    for(int i=0;i<TamMatriz;i++){
        for(int j=0; j<TamMatriz; j++){
            cin >> Matriz[i][j];
            
            if(i==Linha_Na_Matriz){
                 Soma = Soma + Matriz[i][j];
            }
        }
    }
    if(Soma_ou_Media=='S'){
        cout << fixed << setprecision(1) << Soma << endl;
    }else{
        cout << fixed << setprecision(1) << Soma/TamMatriz << endl;
    }

    return 0;
}