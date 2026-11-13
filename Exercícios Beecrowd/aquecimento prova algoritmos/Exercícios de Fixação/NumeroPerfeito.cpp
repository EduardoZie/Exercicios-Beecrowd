#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    /// Numero Perfeito 

    int NumeroDeCasos;
    cout << "Digite o numero de casos de teste:" << endl;
    cin >> NumeroDeCasos;

    while (NumeroDeCasos--){
        int N;
        cin >> N;

        int SomaDivisor=0;

        for(int i=1; i<N; i++){
            if (N%i==0) SomaDivisor = SomaDivisor + i;
        
        }
        if (SomaDivisor==N){
            cout << N << " eh um numero perfeito" << endl;
        }else{
            cout << N << " nao eh um numero perfeito" << endl;
        }
    }
    
    return 0;
}