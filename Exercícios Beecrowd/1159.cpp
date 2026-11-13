#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int X;

    while(cin >> X){
        int Cont= 0, Soma= 0;
    
        if(X!=0){
            for(int i=X; Cont<5; i++){
                if(i%2==0){
                Soma = Soma + i;
                Cont++;
                }
            }
            cout << Soma << endl;
                }else{
                break;
            }
        
    }

    return 0;
}