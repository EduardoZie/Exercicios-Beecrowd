#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 10 
using namespace std;
int main(){

    int Vetor[TAM];

    for(int i=0; i<TAM; i++){
        cin >> Vetor[i];
    }
    for(int i=0; i<TAM/2; i++){
        swap(Vetor[i], Vetor[TAM-1-i]);
    }
    for(int i=0; i<TAM; i++){
        cout << Vetor[i] << endl;
    }
    return 0;
}