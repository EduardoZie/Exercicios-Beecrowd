#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int TotalCR, Qc, Qr;
    double percentC, percentR;
    cin >> Qc >> Qr;
    TotalCR = Qc + Qr;
    percentC = (Qc * 100.0) / TotalCR;
    percentR = (Qr * 100.0) / TotalCR;
    cout << "Total de cobaias: " << TotalCR << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << percentC << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << percentR << endl;
    
    return 0;
}