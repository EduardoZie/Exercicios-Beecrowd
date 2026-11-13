#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int N_Testes;
    cin >> N_Testes;
    
    for(int i=0; i<N_Testes; i++){
        int Cont= 0, Soma= 0;
        
        int X, Y;
        cin >> X >> Y;
        
        for(int i=X; Cont<Y; i++){
            if(i%2!=0){
                Soma = Soma + i;
                Cont++;
            }
        }
        cout << Soma << endl;
    }

    return 0;
}