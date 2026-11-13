#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

int Numero, N2= 0;
int cont = 0;
for (int i=1; i<=100; i=i+1){
    
    cin >> Numero;

    if(Numero > N2){
        N2 = Numero;
        cont = i;

    } 

}
    cout << N2 << endl;
    cout << cont << endl;

    return 0;
}