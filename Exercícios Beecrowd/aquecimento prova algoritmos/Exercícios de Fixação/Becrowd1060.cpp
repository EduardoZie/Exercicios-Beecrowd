#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int ContadorPosit = 0;
    int Cont = 0;

    for(int i=0; Cont<6; i++){
        
        double Numero;
        cin >> Numero;

        if (Numero>0){
            ContadorPosit++;
            Cont++;
        }
        if (Numero<0){
            Cont++;
        }
 
    }
    cout << ContadorPosit << " valores positivos" << endl;

    return 0;
}