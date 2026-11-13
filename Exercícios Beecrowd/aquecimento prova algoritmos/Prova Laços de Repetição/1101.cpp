#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int M, N, Maior, Menor;
    

    while (cin >> M >> N && M > 0 && N > 0){
        int SomaInteiros=0;
        
        if(M>N){
            Maior = M;
            Menor = N;
        }else{
            Maior = N;
            Menor = M;
        }

    for (int i=Menor; i<=Maior; i++){
        cout << i << " ";
        SomaInteiros = SomaInteiros + i;
    }

    cout << "Sum=" << SomaInteiros << endl;
    }

    return 0;
}