#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 10 
using namespace std;
int main(){

    int Vetor[TAM], Vetor_2[TAM], Cont=0, Posicao=0;

    for(int i=0; i<TAM; i++){
        cin >> Vetor[i];

        if(Vetor[i]>0){
            Vetor_2[Cont]= Vetor[i];
            Cont++;
        } 
    }
    
    for(int i=0; i<Cont; i++){
        cout <<"Vet[" << i << "] = " << Vetor_2[i] << endl;
    }
    return 0;
}