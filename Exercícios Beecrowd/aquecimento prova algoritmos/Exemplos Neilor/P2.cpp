#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int Soma=0;

    for(int i=100; i<120; i++){
        if (i%2!=0){
            cout << i << endl;
            Soma = Soma+i;
        }
    }
    cout << "Soma=" << Soma << endl;
   
}