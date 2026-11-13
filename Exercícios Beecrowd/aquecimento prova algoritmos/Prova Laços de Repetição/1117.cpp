#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    double Nota,Valor=0;
    int ContadorValido=0;
    
    while(ContadorValido<2){
         
        cin >> Nota;
    
        if (Nota>=0 and Nota <=10){
            ContadorValido++;
            Valor = Valor + Nota; 
        }else{
            cout << "nota invalida" << endl;
        }
       
    }

         cout << fixed << setprecision(2) << "media = " << Valor / 2.0 << endl;
    
    return 0;
}