#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 7
using namespace std;
int main(){

    int Soma = 0;
    int M[TAM] [TAM];
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            
            cin >> M[i] [j];
            if (i == 2){
            Soma = Soma + M[i][j];
            }
        }
    }

    cout << Soma << endl;
    return 0;
}