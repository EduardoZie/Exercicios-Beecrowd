#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
    int Ntentativas;
    int Quantia, TotalAnimais = 0, QC = 0, QR = 0 , QS= 0;
    string Tipo;
    
    cin >> Ntentativas;

    for (int i=0; i < Ntentativas; i = i+1){

        cin >> Quantia >> Tipo;

        if (Tipo == "C"){
            TotalAnimais = TotalAnimais + Quantia;
            QC = QC + Quantia;
            Quantia = 0;
        }
        if (Tipo == "R"){
            TotalAnimais = TotalAnimais + Quantia;
            QR = QR + Quantia;
            Quantia = 0;
        }
          if (Tipo == "S"){
            TotalAnimais = TotalAnimais + Quantia;
            QS = QS + Quantia;
            Quantia = 0;
        }
    }

    double PercentualC = (double)QC / TotalAnimais * 100;
    double PercentualR = (double)QR / TotalAnimais * 100;
    double PercentualS = (double)QS / TotalAnimais * 100;
    
    cout << TotalAnimais << endl;
    cout << QC << endl;
    cout << QR << endl;
    cout << QS << endl;
    cout << PercentualC << endl;
    cout << PercentualR << endl;
    cout << PercentualS << endl;
    
    
    return 0;
}