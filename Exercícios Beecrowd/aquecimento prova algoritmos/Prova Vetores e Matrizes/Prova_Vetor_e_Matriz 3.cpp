#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 5 
using namespace std;
int main(){

    int Matriz[TAM][TAM], Soma = 0;

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cin >> Matriz[i][j];

            if(i==j) Soma = Soma + Matriz[i][j];
        }
    }
    
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout << Matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"Soma da Diagonal Principal = " << Soma << endl;
    return 0;
}