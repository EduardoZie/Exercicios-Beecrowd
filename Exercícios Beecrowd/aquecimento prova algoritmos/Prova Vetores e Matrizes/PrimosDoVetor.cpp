#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 15
using namespace std;
int main(){

    int K[TAM], Primos[TAM], ContPrimos=0, QuantDivisoes;

    for(int i=0; i<TAM; i++){
    cin >> K[i];
    QuantDivisoes=0;

    for(int j=1; j<=K[i]; j++){
    if(K[i]%j==0){
    QuantDivisoes++;
    }
    }
    if(QuantDivisoes==2){
    Primos[ContPrimos] = K[i];
    ContPrimos++;
    }
    }

    for (int i=0; i<ContPrimos; i++){
    cout << "P[" << i << "]=" << Primos[i] << endl;
    }

    return 0;
}
