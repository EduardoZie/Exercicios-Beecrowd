#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 10
using namespace std;

int main() {

    double M[TAM][TAM], Soma=0;
    

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cin >> M[i][j];

            
            
            if(i==j || i==9){
                Soma= Soma + M[i][j];
                
            }
        }
    }

    cout << Soma << endl;
    return 0;
}